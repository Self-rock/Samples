#include <iostream>
#include <thread>
#include <vector>

// Функция, которая будет выполняться в отдельном потоке
void threadFunction(int id) {
    std::cout << "Поток " << id << " запущен." << std::endl;
    // Имитация работы
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Поток " << id << " завершен." << std::endl;
}

int main() {
    const int numThreads = 5; // Количество потоков
    std::vector<std::thread> threads; // Вектор для хранения потоков

    // Создание и запуск потоков
    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(threadFunction, i); // Передаем идентификатор потока
    }

    // Ожидание завершения всех потоков
    for (auto& thread : threads) {
        thread.join(); //join() для каждого потока, чтобы основной поток ожидал завершения всех созданных потоков перед выходом из программы.
    }

    std::cout << "Все потоки завершены." << std::endl;
    return 0;
}
