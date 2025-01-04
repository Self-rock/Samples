#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string test{"123456891011"};
    
    /*
    find_end();
    
    none_of();
    any_of();
    find_if_not();
    is_partitioned();
    partition_point();
    remove_copy();
    remove_copy_if();
    copy_if();
    copy_n();
    partition_copy();
    remove();
    remove_if();
    reverse(); //reverse(begin(str), end(str));
    reverse_copy();
    rotate(); //rotate(str.begin(), str.begin() + 1, str.end()); поворот строки str на 1 символ
    rotate_copy();
    stable_partition();
    partial_sort_copy();
    lower_bound();
    upper_bound();
    equal_range();
    binary_search();
    inplace_merge()
    prev_permutation();
    replace_copy();
    replace_copy_if();
    is_sorted();
    is_sorted_until();
    minmax();
    minmax_element();
    is_permutation();
    clamp();
    shuffle();
for_each();
    for_each_n();
    
    find_if();
    find_first_of();
    
    adjacent_find(vec.begin(), vec.end());//ищет первый элемент в контейнере, который имеет соседний элемент с таким же значением или удовлетворяет заданному условию, 
    //возвращает итератор на первое совпадение , либо указатель на конец контейнера, если совпадений не найдено
    
    search_n();
    transform(v.begin(), v.end(), [](int n){return n*2;});  //применяет лямбду к каждому элементу контейнера
    transform(str.begin(), str.end(), str.begin(), ::toupper);//массив в верхний регистр
    
    replace_if();
    generate();
    generate_n();
    unique_copy();
    random_shuffle();
    partition(v.begin(), v.end(), [](int n){return n%2==0;}); //разделяет элементы по предикату, возвращает итератор
    partial_sort();
    nth_element();
    merge();
    stable_sort();
    set_union();
    
    */
    
    /*  должно работать в 20 стандарте, тут не работает...
    std::vector<int> erase_if_vec = {1, 2, 2, 3, 4, 4, 5};
    erase_if(erase_if_vec, [](int n){return n%2==0;});
    cout << "размер  erase_if_vec"<<erase_if_vec.size()<<endl;
    for_each(erase_if_vec.begin(), erase_if_vec.end(), [](int a){ cout<<a<<" ";});
    cout << endl; */

    //set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec1.end(), back_inserter(vec_result))//позволяет найти пересечение двух отсортированных контейнеров. Результат записывается в другой контейнер.

    std::vector<int> vec = {1, 2, 2, 3, 4, 4, 5};
    auto last = unique(vec.begin(), vec.end());//собирает уникальные эл-ты в начало, и возвращает указательна первый не уникальный эл-т
    vec.erase(last, vec.end());//удаляет элементы с указателя на первый не уникальный, по конец контейнера
    
    //count(v.begin(), v.end(), 8);//считает кол во 8  в контейнере//  count(str.begin(), str.end(), 'x')//считает чивло символов x в контейнере
    
    int compare=2;//подсчет количества совпаденийс условием в лямбде
    vector<int> count_str {1,2,3,6,5,2,3,9,7,2,3,6,4,2,8,9,3,4};
    int intcomp = count_if(count_str.begin(), count_str.end(), [compare](int x){return x==compare;});
    cout << "count_if... "<<intcomp<<endl;

    //подсчет русских букв в смешаном русско-латинском стринге
    u32string strRuEn{U"kdsпajfkaпdsп fkпasdj ksпппadj fkпsdaj f"};
    auto pred = [](char32_t a){
        return a==L'п'?1:0;
    };    
    cout<<"simbols п in string = "<< count_if(strRuEn.begin(), strRuEn.end(), pred)<<endl;

    //возвращает итератор на минимальный элемент контейнера
    cout << "min_element test "<<*min_element(test.begin(), test.end())<<endl;
    //min(nums.begin(), nums.end()));//тоже работает
    //возвращает итератор на максимальный элемент контейнера
    cout << "max_element test "<<*max_element(test.begin(), test.end())<<endl;

    string str1dif{"1,2,3,4,5,6,8"};//для диференс строки должны быть сортированы
    string str2dif{"3,5,9"};
    string strdifresult;
    //что сравниваем, с чем, и куда потом вставляем результат
    set_difference(str1dif.begin(),str1dif.end(), 
                    str2dif.begin(),str2dif.end(),
                    back_inserter(strdifresult));
    cout << "set_difference strdifresult "<<strdifresult<<endl;
    strdifresult ="";
    //что сравниваем, с чем, и куда потом вставляем результат (слепливает вмести два последних значения)
    set_symmetric_difference(str1dif.begin(),str1dif.end(), 
                        str2dif.begin(),str2dif.end(),
                        back_inserter(strdifresult));
    cout << "set_symmetric_difference strdifaresult "<<strdifresult<<endl;
    
    string str {"Hi everiver"};
    cout<<str<<endl;
    
    //sort(str.begin(), str.end());//не универсальный вариант
    sort(begin(str), end(str));//универсальный вариант сортировки
    cout<<str<<endl;

    cout<<"front_inserter"<<endl;// начиная с c++20
    list<int> lint{4,5,6};
    cout<<"*lint.begin()="<<*lint.begin()<<endl;
    *(front_inserter(lint))=18;
    cout<<"*lint.begin() after *(front_inserter(lint))=18  ="<<*lint.begin()<<endl;
    
    //проверяем все элементы вектора на соответствие услвию
    vector<int> ones ={1, 1, 1, 1, 1, 1};
    if(all_of(ones.begin(), ones.end(), [](int i){return i==1;})) cout<<"al ones = 1";
    
    
    //сорт со своим оператором сравнения 
    /* создаем свой оператор сравнения
    static bool comparator(int &a  , int & b){
      return a%2 < b%2 ;
    }
    //используем созданый оператор сравнения ждя ссортировки
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size(); 
        if(n==1) return nums;
        sort(nums.begin() , nums.end() , comparator);
        return nums;
    }*/

    //или так с лямбдой
    //sort(nums.begin() , nums.end() , [](int &a  , int & b){return a%2 < b%2 ;});

    //сортировка вектора векторов по второму (индекс 1) элементу внутреннего вектора
    //sort(vecvec.begin(), vecvec.end(), [](vector<int>& a, vector<int>& b){return a[1]<b[1];});
    
    //auto it =  find(v.begin(), v.end(), 4); //находит первое вхождение 4 в векторе, возвращает итератор

    //copy(v.begin(), v.end(), copyng.begin());// копирует один контейнер в другой (не проверено)
    
    vector<int> rep ={1, 2, 1, 2, 1, 2};
    cout<<"\nrep befor \n";
    for_each(rep.begin(), rep.end(), [](int a){cout<<a<<" \n";});
    replace(rep.begin(), rep.end(), 2, 77);// замена значений в диапазоне
    cout<<"rep after \n";
    for_each(rep.begin(), rep.end(), [](int a){cout<<a<<" \n";});


    vector<string> str88(4);//заполнение массива из лямбды
    generate(str88.begin(), str88.end(), [i=0]() mutable {return ++i %2 ? "odd" : "pair";});    
    for(auto a:str88) cout<<a<<" ";
    cout<<endl;

    //перестановка элементов массива всеми вариантами
    std::vector<int> pvint{10, 20, 30};
    for(int i=0; i<(pvint.size()*(pvint.size()-1)); ++i){
        for(auto i:pvint) std::cout<<i<<" ";
        std::next_permutation(pvint.begin(), pvint.end());
        std::cout<<std::endl;
    }


    return 0;
}

//определение гласных букв
 //bool is_vovel(char c){
 //       if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
 //       return false;
 //   }
 


 //auto it = std::search(gde_ishem.begin(), gde_ishem.end(), chto_ishem.begin(), chto_ishem.end());//возвращает итератор на начало вхождения найденой строки
 //   std::distance(haystack.begin(), it); //возвращает дистанцию между итераторами


//#include <bits/stdc++.h> //includes() требует
//vector<int> arr1{ 3, 5, 7, 9 };
//vector<int> arr2{ 5, 9 };
//if (includes(arr1.begin(), arr1.end(), arr2.begin(), arr2.end()))//определение того, содержит ли указанный контейнер определенную последовательность элементов
//cout << "arr1 contains arr2\n";// ищем в arr1 входждение arr2 (не обязательно последовательно, но обязательно в полном составе)
//else
//cout << "arr1 doesn't contain arr2\n";// возвращает bool
    

