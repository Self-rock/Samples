#include <iostream>
#include <tuple>
#include <string>
int main()
{
    std::tuple<int, float, std::string> mytuple{3, 8.6545, "mystring"};//создаем и инициализируем
    
    std::cout<<"содержимое mytuple"<<std::endl;
    std::cout<<"std::get<0>(mytuple) = "<<std::get<0>(mytuple)<<std::endl;//выводим содержимое mytuple по индексу
    std::cout<<"std::get<1>(mytuple) = "<<std::get<1>(mytuple)<<std::endl;
    std::cout<<"std::get<2>(mytuple) = "<<std::get<2>(mytuple)<<std::endl;
    std::cout<<"размер tuple = "<<std::tuple_size<decltype(mytuple)>::value <<std::endl;//смотрим размер tuple
    
    std::tuple<int, float, std::string> mytuple2;//создаем еще один
    
    swap(mytuple, mytuple2);//обмениваем содержимое местами
    
    std::cout<<"содержимое mytuple2 после обмена"<<std::endl;
    std::cout<<"std::get<0>(mytuple2) = "<<std::get<0>(mytuple2)<<std::endl;//выводим mytuple2 содержимое по индексу
    std::cout<<"std::get<1>(mytuple2) = "<<std::get<1>(mytuple2)<<std::endl;
    std::cout<<"std::get<2>(mytuple2) = "<<std::get<2>(mytuple2)<<std::endl;
    
    std::cout<<"содержимое mytuple после обмена"<<std::endl;
    std::cout<<"std::get<0>(mytuple) = "<<std::get<0>(mytuple)<<std::endl;//выводим mytuple содержимое по индексу
    std::cout<<"std::get<1>(mytuple) = "<<std::get<1>(mytuple)<<std::endl;
    std::cout<<"std::get<2>(mytuple) = "<<std::get<2>(mytuple)<<std::endl;
    
    mytuple = mytuple2;
    std::cout<<"содержимое mytuple после присвоения"<<std::endl;
    std::cout<<"std::get<0>(mytuple) = "<<std::get<0>(mytuple)<<std::endl;//выводим mytuple содержимое по индексу
    std::cout<<"std::get<1>(mytuple) = "<<std::get<1>(mytuple)<<std::endl;
    std::cout<<"std::get<2>(mytuple) = "<<std::get<2>(mytuple)<<std::endl;
    

    return 0;
}