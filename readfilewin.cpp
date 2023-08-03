#include <iostream>
#include <Windows.h>

int main() {
    // Имя файла для чтения
    const wchar_t* filename = L"example.txt";

    // Открываем файл в режиме чтения
    HANDLE hFile = CreateFileW(filename, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    
    // Проверяем, успешно ли открыт файл
    if (hFile == INVALID_HANDLE_VALUE) {
        std::cerr << "Не удалось открыть файл" << std::endl;
        return 1;
    }

    // Буфер для чтения данных из файла
    const int bufferSize = 1024;
    char buffer[bufferSize];

    // Читаем файл
    DWORD bytesRead;
    while (ReadFile(hFile, buffer, bufferSize, &bytesRead, NULL) && bytesRead > 0) {
        // Выводим прочитанные данные на экран
        std::cout.write(buffer, bytesRead);
    }

    // Закрываем файл
    CloseHandle(hFile);

    return 0;
}