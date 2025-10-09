#include <fstream>
#include <future>
#include <string>
#include <iostream>

// Читает весь файл в строку
std::string readFile(const std::string& path) {
    std::ifstream in(path);
    return { std::istreambuf_iterator<char>(in), {} };
}

int main(int argc, char const *argv[])
{
    //Вызовем чтение сразу двух файлов параллельно и дождёмся результата:
    auto fut1 = std::async(std::launch::async, readFile, "future_async1.txt");
    auto fut2 = std::async(std::launch::async, readFile, "future_async2.txt");

    // Здесь можно выполнять другие задачи...
    int a = 1000000000, b=1000;
    for(size_t i =0; i<10000000; i++){
        a*=b;
        a/=b;
    }

    std::string config = fut1.get();
    std::string logs   = fut2.get();
    //Таким образом вы распараллеливаете I/O-операции без явных потоков или сложных библиотек. 
    //Как только оба future будут готовы, вызов get() вернёт содержимое файлов.

    std::cout<<config<<logs;
    return 0;
}
