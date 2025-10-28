#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm> //нужен для ranges::sort

int main(int argc, char const *argv[])
{
    std::vector<int> v{1,1,1,223,1,2,3,4,5,7,8};
    for(auto elem:v | std::views::transform([](auto e){return e*2;})) std::cout<<elem<<" ";

    // Сортируем вектор с помощью std::ranges::sort
    std::ranges::sort(v);

    // Выводим отсортированные числа
    std::cout << "Отсортированные числа: ";
    for (const auto& num : v) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}

