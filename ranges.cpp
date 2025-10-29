#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm> //нужен для ranges::sort

int main(int argc, char const *argv[])
{
    auto lessthantwo = [](auto e){return e<2;};
    
    std::vector<int> v{1,1,1,223,1,2,3,4,5,7,8,0};
    std::vector<int> vv{1,1,1,223,1,2,3,4,5,7,8,0};

    if(std::ranges::equal(v, vv)) std::cout<<"ranges v and vv equal\n";//проверяем равны ли ранжи
    else std::cout<<"ranges v and vv not equal\n";

    auto it = std::ranges::find(v, 223);//поиск элемента, возвращает итератор на найденый элемент или итератор на конец контейнера, если не нашел.
    if(it!=v.end()) std::cout<<"std::ranges::find, find 223\n";

    int count = std::ranges::count(v, 1);//считаем сколько в ранже единичек
    std::cout<<"in v ranges count 1... = "<<count<<"\n";

    for(auto elem:v 
        | std::views::drop_while(lessthantwo) //отсеивает пока не встретит первый не соответствующие предикату (в данном случ. меньше 2)
        | std::views::transform([](auto& e){return e*2;})) std::cout<<elem<<" ";//удваивает в views а не в векторе (меняет в векторе return e*=2)

    //удваеваем в векторе
    //std::ranges::for_each(v, [](auto& e){ e*=2;});
    
    // Сортируем вектор с помощью std::ranges::sort
    std::ranges::sort(v);

    // Выводим отсортированные числа
    std::cout << "Отсортированные числа: ";
    for (const auto& num : v)  std::cout << num << " ";
    std::cout << std::endl;
    
    
    return 0;
}

