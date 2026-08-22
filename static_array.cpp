#include <iostream>
#include <cstddef>
#include <stdexcept>

// Шаблонный класс: T - тип данных, N - фиксированный размер массива
template <typename T, std::size_t N>
class StaticArray {
private:
    T m_data[N]; // Встроенный статический массив

public:
    // Конструктор по умолчанию (инициализирует элементы нулями/дефолтными значениями)
    StaticArray() : m_data{} {}

    // Конструктор для инициализации списком (например: StaticArray<int, 3> arr = {1, 2, 3};)
    StaticArray(std::initializer_list<T> list) {
        std::size_t i = 0;
        for (const auto& item : list) {
            if (i >= N) break;
            m_data[i++] = item;
        }
    }

    // Возврат размера массива
    constexpr std::size_t size() const { return N; }

    // Оператор доступа по индексу (для записи и чтения модифицируемых объектов)
    T& operator[](std::size_t index) {
        return m_data[index];
    }

    // Оператор доступа по индексу (для чтения константных объектов)
    const T& operator[](std::size_t index) const {
        return m_data[index];
    }

    // Безопасный доступ с проверкой границ (опционально, но полезно)
    T& at(std::size_t index) {
        if (index >= N) {
            throw std::out_of_range("Индекс за пределами массива!");
        }
        return m_data[index];
    }

    // --- Реализация итераторов ---

    // Указатель на первый элемент
    T* begin() { return &m_data[0]; }
    const T* begin() const { return &m_data[0]; }

    // Указатель на элемент, следующий за последним
    T* end() { return &m_data[N]; }
    const T* end() const { return &m_data[N]; }
};

int main() {
    // 1. Создаем массив целых чисел
    StaticArray<int, 5> intArray = {10, 20, 30, 40, 50};

    // Чтение и запись по индексу
    intArray[2] = 99; // Запись
    std::cout << "Элемент по индексу 2: " << intArray[2] << "\n\n"; // Чтение

    // Обход через range-based for (for(auto i : массив))
    std::cout << "Массив int через range-for: ";
    for (auto val : intArray) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    // Изменение элементов через range-for (по ссылке)
    for (auto& val : intArray) {
        val *= 2;
    }

    // Обход через явные итераторы от begin() до end()
    std::cout << "Массив int (умноженный на 2) через итераторы: ";
    for (auto it = intArray.begin(); it != intArray.end(); ++it) {
        std::cout << *it << " "; // Разыменовываем итератор
    }
    std::cout << "\n\n";

    // 2. Создаем массив другого типа (строки)
    StaticArray<std::string, 3> stringArray = {"Привет", "мир", "C++"};
    
    std::cout << "Массив строк: ";
    for (const auto& str : stringArray) {
        std::cout << str << " ";
    }
    std::cout << "\n";

    return 0;
}
