#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main(int argc, const char** argv) {
    auto path = fs::current_path(); // получаем текущую директорию
    std::cout<<"path = "<<path<<std::endl;
    for(const auto& entry:fs::directory_iterator(path)){ //проходим по всем файлам
        std::cout<<entry.path()<<std::endl; //выводим путь к файлу
    }

    return 0;
}