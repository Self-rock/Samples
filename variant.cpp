#include <iostream>
#include <variant>

int main(int argc, char const *argv[])
{
    std::variant <int, double> v1;
    v1 = 1;//активируем int значение
    std::cout << "v1.index() = " << v1.index() <<std::endl;
    std::cout << "std::get<0>(v1) = " << std::get<0>(v1) <<std::endl;
    if(std::holds_alternative<int>(v1)) std::cout << "hold int"<<std::endl;

    v1 = 3.14;//активируем double
    std::cout << "v1.index() = " << v1.index() <<std::endl;
    std::cout << "std::get<1>(v1) = " << std::get<1>(v1) <<std::endl;
    if(std::holds_alternative<double>(v1)) std::cout << "hold double"<<std::endl;

    std::cout <<std::endl;



    return 0;
}
