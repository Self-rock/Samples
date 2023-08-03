#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Имя файла для чтения
    std::string filename = "example.txt";

    // Открываем файл в режиме чтения
    std::ifstream file(filename);

    // Проверяем, успешно ли открыт файл
    if (!file.is_open()) {
        std::cerr << "Не удалось открыть файл: " << filename << std::endl;
        return 1;
    }

    // Строка, в которую будем читать данные из файла
    std::string line;

    // Читаем файл построчно и выводим содержимое на экран
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    // Закрываем файл
    file.close();

    return 0;
}