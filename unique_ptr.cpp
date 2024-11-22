#include <memory>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    std::unique_ptr<int> ptr = std::make_unique<int>(42); //создаем умный уникальный указатель
    std::cout << *ptr << std::endl;  // 42  разименовываем указатель и выводим значение на которое он указывает
    
    return 0;
}