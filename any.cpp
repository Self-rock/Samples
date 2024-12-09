#include <iostream>
#include <any>
#include <string>

int main(int argc, char const *argv[])
{
    
    //Храним в ппеременной v типа any попеременно то число, то строку
    std::any v= 42;
    std::cout << "Число "<< std::any_cast<int>(v)<<std::endl;
    v =  std::string("Hello!");
    std::cout << "Строка "<< std::any_cast<std::string>(v)<<std::endl;

    return 0;
}
