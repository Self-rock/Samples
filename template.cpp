#include <iostream>
#include <typeinfo>
#include <type_traits>
template <typename T, typename T1>
auto division(T a, T1 b) -> decltype(a + b) {//возвращаем больший из типов
    return a / b;
}

template <typename T, size_t N> 
requires (N<=1000) //задаем требование к размеру массива
struct array{
    T arr[N];
};

//вариадик темплейт
template<typename ... Args>
auto sum(const Args& ... args){//конст обязательно, иначе не работает
    return (args + ... );
}

int main(int argc, char const *argv[])
{
    std::cout << division(3, 3.3) << " " << typeid(division(3, 3.3)).name() << std::endl;//показываем возвращаемый тип
    
    array<int, 100> a;//создаем массив с проверкой размера
    
    int aaa=5, bbb=6;
    std::cout<<"вывод вариадик темплейта sum="<< sum(aaa, 9, bbb, 10)<<"\n";
    return 0;
}
