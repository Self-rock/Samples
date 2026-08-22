#include <iostream>
#include <stdexcept>

int main(int argc, char const *argv[])
{
    system("chcp 65001");
    
    try{
        throw  std::out_of_range("Индекс вне диапазона");
    }catch(...){
        std::cout<<"Что то пошло не так";
    }//ловим все оставшиеся необработаными исключения
    return 0;
}

//throw std::runtime_error("Не удалось открыть файл: " + filename);
/*
    catch (const std::runtime_error& e) {
            std::cerr << "Перехвачено runtime_error: " << e.what() << std::endl;
    }
*/

/*
catch (const std::exception& e) {
        std::cerr << "Перехвачено общее исключение: " << e.what() << std::endl;
    }
*/

//throw std::out_of_range("Индекс вне диапазона");


//throw std::invalid_argument("Размер массива должен быть положительным");
/*
    catch (const std::invalid_argument& e) {
        std::cerr << "Перехвачено invalid_argument: " << e.what() << std::endl;
    }
*/


/*Исключение в конструкторе класса
MyClass{
    int* a;
public:
    MyClass(int* a_=nullptr) try : a(a_) {
        // тело конструктора
    } catch (...) {
        // обработка исключения
    }
};*/

/*
vector v {19, 71, 47, 192, 4004};
    try {
        v.at(5) = 2001;
    } catch (const std::out_of_range & e) {
        println("Ouch!\n{}", e.what());
    }
*/