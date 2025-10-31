#include <iostream>
#include <chrono>

long long int sum(long long int a, long long int b){return a+b;}

int main(int argc, char const *argv[])
{
    auto start = std::chrono::high_resolution_clock::now();
    // код, который измеряем
    for(int i = 0 ; i<1000000000; i++) sum(85321565465, 456456456456);
    auto end = std::chrono::high_resolution_clock::now();


    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Время выполнения: " << ms.count() << " мс\n";


    return 0;
}
