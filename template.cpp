#include <iostream>
#include <typeinfo>
template <typename T, typename T1>
auto division(T a, T1 b) -> decltype(a + b) {//возвращаем больший из типов
    return a / b;
}


int main(int argc, char const *argv[])
{
    std::cout << division(3, 3.3) << " " << typeid(division(3, 3.3)).name() << std::endl;//показываем возвращаемый тип
    return 0;
}
