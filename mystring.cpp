#include <iostream>
#include <cstring>
#include <stdexcept>
#include <utility>

class MyString{

    char* data;
public:
    //конструктор по умолчанию
    MyString():data(new char[1]){
        data[0] = '\0';
    }

    //конструктор из C-string
    explicit MyString(const char* str){
        if (!str) {
            data = new char[1];
            data[0] = '\0';
        } else {
            data = new char[std::strlen(str)+1];
            std::strcpy(data, str);
        }
    }    

    //копирующий конструктор
    MyString(const MyString& other){
        data = new char[std::strlen(other.data)+1];
        std::strcpy(data, other.data);
    }

    //перемещающий конструктор
    MyString(MyString&& other)noexcept : data(other.data){
        other.data = nullptr;
    }

    // оператор копирования
    MyString& operator=(const MyString& other) {
        if (this != &other) {
            data = other.data;
        }
        return *this;
    }

    //оператор перемещения
    MyString& operator=(MyString&& other)noexcept{
        if(this != &other){
            delete[] data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }

    //деструктор
    ~MyString(){delete[] data;}

    //оператор сложения строк
    MyString operator+(const MyString& other){
        size_t len = strlen(data) + strlen(other.data);
        char* new_data = new char[len+1];
        strcpy(new_data, data);
        strcat(new_data, other.data);
        MyString result(new_data);
        delete[] new_data;
        return result;
    }

    //оператор индексирования неконст и конст
    char& operator[](size_t index){
        if(index>=strlen(data)) throw std::out_of_range("Index out of range");
        return data[index];
    }  
    char& operator[](size_t index)const{
        if(index>=strlen(data)) throw std::out_of_range("Index out of range");
        return data[index];
    }

    //операторы равно и не равно
    bool operator==(const MyString& other)const{
        return strcmp(data, other.data) == 0;
    }
    bool operator!=(const MyString& other)const{
        return !(*this == other);
    }

    //получение длинны
    size_t lenght()const{
        return strlen(data);
    }

    //получение доступа через сырой поинтер
    const char* cstr()const{
        return data;
    }

    //получение подстроки
    MyString substr(size_t pos, size_t len){
        size_t str_len = strlen(data);
        if(pos>str_len) throw std::out_of_range("Position out of range");
        size_t max_len = (pos+len>str_len) ? str_len - pos : len;

        char* sub_data = new char[max_len+1];
        strncpy(sub_data, data+pos, max_len);
        sub_data[max_len] = '\n';

        MyString result(sub_data);
        delete[] sub_data;
        return result;
    }

    //вывод в поток
    friend std::ostream& operator<<(std::ostream& os, const MyString& str){
        os << (str.data? str.data:"");
        return os;
    }

};

int main(int argc, const char** argv) {
    
    MyString s;
    std::cout<<"s.lenght = "<<s.lenght()<<std::endl;

    MyString a("Hello");
    MyString b(" world");
    MyString c = a + b;
    std::cout<<"concatenated a and b = "<<c<<std::endl;
    std::cout<<"c.lenght = "<<c.lenght()<<std::endl;
    std::cout<<"C string = "<<c.cstr()<<std::endl;
    std::cout<<"char at index 0 "<<c[0]<<std::endl;
    
    MyString d("Hello world");
    std::cout<<"c == d : "<<(c==d ? "True" : "False")<<std::endl;
    
    MyString e = std::move(c);
    std::cout<<"moved string: "<<e<<std::endl;
    std::cout<<"original string, after move: "<<c<<std::endl;


    return 0;
}