#include <iostream>

template <typename T>
struct PointerHolder
{
    T* ptr_;
    public:
    PointerHolder():ptr_(nullptr){
        std::cout<<"defctor\n";}//конструктор по умолчанию
    explicit PointerHolder(const T& value):ptr_(new T(value)){
        std::cout<<"ctor_param\n";}//конструктор с параметром
    PointerHolder(const PointerHolder &other){//конструктор копирования
        std::cout<<"copy_ctor\n";
        if(other.ptr_){
            ptr_= new T(*other.ptr_);
        }
        else{
            ptr_ = nullptr;
        }
    }
    PointerHolder(PointerHolder &&other)noexcept : ptr_(other.ptr_){
        other.ptr_=nullptr;std::cout<<"move_ctor\n";}//конструктор перемещения
    ~PointerHolder(){std::cout<<"dtor\n";}//деструктор
    /*
    // Оператор разыменования
    T& operator*() {
        return *ptr_;
    }
    const T& operator*() const {
        return *ptr_;
    }

    // Оператор доступа к члену
    T* operator->() {
        return ptr_;
    }
    const T* operator->() const {
        return ptr_;
    }
    */
};


int main(int argc, const char** argv) {
    PointerHolder<int> ph0;//вызываем конструктор по умолчанию
    PointerHolder ph1(8);//вызываем конструктор с параметром
    PointerHolder ph2(ph1);//вызываем конструктор копирования
    PointerHolder ph3 = ph1;//вызываем конструктор копирования
    PointerHolder ph4 (std::move(ph3));
    return 0;
}