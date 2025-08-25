#include <iostream>
#include <thread>
#include <chrono>
//#include <boost/progress.hpp>//устаревшее, вмето него, что ниже
#include <boost/timer/progress_display.hpp>


int main(int argc, char const *argv[])
{
    int seconds;
    system("chcp 65001");
    std::cout<<"Введите количество секунд\n";
    std::cin>>seconds;
    boost::timer::progress_display pd{seconds};
    for (size_t i = 0; i < seconds; ++i)
    {
        ++pd;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout<<"\nВремя вышло\n";
    
    return 0;
}
