#include <iostream>
#include <vector>
#include <list>
#include <ranges>
#include <print>
#include <algorithm> //нужен для ranges::sort


void psorted(const auto& v) {
    if (std::ranges::is_sorted(v)) std::print("sorted: ");
    else std::print("unsorted: ");
    std::print(v);
}

int main(int argc, char const *argv[])
{
    //std::ranges::sort(v);
    //std::ranges::reverse(v);

    /*
    vector<string> v1 {"alpha", "bravo", "charlie", "delta", "echo"};
    printc(v1, "v1");
    
    vector<string> v2 {};
    std::ranges::copy(v1, back_inserter(v2));
    printc(v2, "v2");
    */
   
    //std::ranges::copy_if(v1, back_inserter(v4), [](string& s){ return s.size() > 4; });

    /*
    ostream_iterator<string> out_it(cout, " ");
    ranges::copy(v1, out_it);
    */
    
    
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
    
    

    //join,- *выравнивание* (flattening) вложенных диапазонов. Другими словами, он берет диапазон диапазонов и превращает его в плоский диапазон.
    std::vector<std::vector<int>> nested{{1, 2}, {3, 4, 5}, {6, 7}};
    auto joined = std::views::join(nested);    
    for (int i : joined)  std::cout<<i; // выведет 1 2 3 4 5 6 7
    //join удаляет структурные границы между внутренними векторами, создавая единый диапазон. 
    //При этом важно понимать, что join работает только с одним диапазоном диапазонов. Вы не можете передать ему два независимых контейнера
        
    std::vector<int> v2 = {1,2,3,4,5};
    auto odds = v2 | std::views::filter([](int x){return x%2;});//фильтр по лямбде
    for(int x:odds) std::cout<<x<<" ";
    std::cout<<std::endl;

    auto first_two = v2 | std::views::take(2);//берет первые два
    for(int x:first_two) std::cout<<x<<" ";
    std::cout<<std::endl;

    auto rest = v2 | std::views::drop(2);//пропускает первые два
    for(int x:rest) std::cout<<x<<" ";
    std::cout<<std::endl;

    for(int x:v2 | std::views::reverse) std::cout<<x<<" ";//итерация в обратном порядке
    std::cout<<std::endl;


    auto vec = std::ranges::views::iota(1, 11) 
        | std::ranges::views::transform([](const auto n){ return n * 5; }) 
        | std::ranges::to<std::vector>();
    for (auto n : vec) std::cout<<n<<" ";
    std::cout<<"\n";

    auto lst = vec | std::ranges::views::reverse
        | std::ranges::to<std::list<double>>();
    for (auto d : lst) std::cout<<d<<" ";
    std::print("\n");





    return 0;
}



