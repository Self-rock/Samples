#include <memory>
#include <iostream>

using namespace std;

struct Foo
{
    Foo() { std::cout << "Init\n"; }
    ~Foo() { std::cout << "Destroy\n"; }
};
void bar()
{
    std::unique_ptr<Foo> p = std::make_unique<Foo>(); // RAII
    // делаем что-то
} // тут автоматически вызовется ~Foo()

int main(int argc, char const *argv[])
{
    std::unique_ptr<int> ptr = std::make_unique<int>(42); // создаем умный уникальный указатель
    // auto ptr = std::make_unique<int>(42); //лучше так
    std::cout << *ptr << std::endl; // 42  разименовываем указатель и выводим значение на которое он указывает

    bar();

    return 0;
}