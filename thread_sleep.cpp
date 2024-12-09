#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    //запуск из контекстного меню не работает, только компиляция из консоли
    std::cout<<"На сколько уснуть? \n";
    int timer;
    std::cin>>timer;
    std::this_thread::sleep_for(std::chrono::seconds(timer));
    std::cout<<"Я проснулся\n";

    return 0;
}