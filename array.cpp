#include <iostream>
#include <vector>
#include <array>

#include <span>//для передачи классического массива в функцию одним параметром

#include <iomanip> // Для форматирования вывода (необязательно)
#include <algorithm>// для for_each
/**
 * Функция для вывода содержимого двумерного массива в консоль.
 * Использует шаблон для автоматического определения количества строк (R)
 * и столбцов (C) из типа переданного массива.
 *
 * @tparam T Тип элементов массива (например, int, double).
 * @tparam R Количество строк.
 * @tparam C Количество столбцов.
 * @param array Ссылка на двумерный массив.
 */
template <typename T, size_t R, size_t C>
void print2DArray(T (&array)[R][C]) {
    std::cout << "Вывод массива [" << R << "x" << C << "]:" << std::endl;
    for (size_t i = 0; i < R; ++i) {
        for (size_t j = 0; j < C; ++j) {
            // Используйте std::setw() для выравнивания, если нужно
            std::cout << std::setw(4) << array[i][j] << " ";
        }
        std::cout << std::endl; // Переход на новую строку после ряда
    }
    std::cout << std::endl;
}

void ConstPrintOnPar(std::span<const int> data) {//печатаем массив, массив константный
    for (int x : data) {
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
}

void DoubleElMass(std::span<int> data) {//удваиваем элементы массива
    for (int& x : data) {
        x *= 2;
    }
}

// Пример использования:
int main() {
    // Пример 1: массив 3x4 целых чисел
    int arr1[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    print2DArray(arr1); // Компилятор автоматически определит R=3, C=4

    // Пример 2: массив 2x3 чисел с плавающей запятой
    double arr2[][3] = {
        {0.1, 0.2, 0.3},
        {1.1, 1.2, 1.3}
    };
    print2DArray(arr2); // Компилятор автоматически определит R=2, C=3

    // Пример 3: массив 4x2 символов
    char arr3[][2] = {
        {'a', 'b'},
        {'c', 'd'},
        {'e', 'f'},
        {'g', 'h'}
    };
    print2DArray(arr3); // Компилятор автоматически определит R=4, C=2


    std::cout<<std::endl<<"Печатаем массив"<<std::endl;

    std::vector<int> v{1, 2, 3};
    std::array<int, 3> a{4, 5, 6};
    int raw[] = {7, 8, 9};

    ConstPrintOnPar(v);    // std::vector
    ConstPrintOnPar(a);    // std::array
    ConstPrintOnPar(raw);  // C-массив
   
    //удваиваем
    DoubleElMass(v);    // std::vector
    DoubleElMass(a);    // std::array
    DoubleElMass(raw);  // C-массив

    //снова печатаем
    std::cout<<std::endl<<"Печатаем массив"<<std::endl;
    ConstPrintOnPar(v);    // std::vector
    ConstPrintOnPar(a);    // std::array
    ConstPrintOnPar(raw);  // C-массив
    

    std::cout<<std::endl<<"for(auto i:a)"<<std::endl;
    int aa[]{1,2,3,4,5,6,7,8,9};
    for(auto i:aa) std::cout<<i<<" ";//в функцию не передается, только через span
    std::cout<<std::endl;
    
    std::cout<<std::endl<<"for_each"<<std::endl;
    std::for_each(std::begin(aa), std::end(aa), [](int aa){std::cout<<aa<<" ";});//в функцию не передается, только через span
    return 0;
}