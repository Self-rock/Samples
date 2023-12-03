#include <windows.h> // заголовочный файл, содержащий функции API
 
// Основная функция - аналог int main() в консольном приложении:
int WINAPI WinMain(HINSTANCE hInstance, // дескриптор экземпляра приложения
                   HINSTANCE hPrevInstance, // в Win32 не используется
                   LPSTR lpCmdLine, // нужен для запуска окна в режиме командной строки
                   int nCmdShow) // режим отображения окна
{
        // Функция вывода окна с кнопкой "ОК" на экран (о параметрах позже)
        MessageBox(NULL, L"Hello, world!!!", L"Windows procedure", MB_OK);
        return 0; // возвращаем значение функции
}