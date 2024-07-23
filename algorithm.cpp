#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string test{"123456891011"};
    
    /*
    find_end();
    all_of();
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
    next_permutation();
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
    find();
    find_if();
    find_first_of();
    adjacent_find();
    
    
    
    search_n();
    transform();  transform(str.begin(), str.end(), str.begin(), ::toupper);//массив в верхний регистр
    replace();
    replace_if();
    generate();
    generate_n();
    unique_copy();
    random_shuffle();
    partition();
    partial_sort();
    nth_element();
    merge();
    stable_sort();
    set_union();
    set_intersection(); 
    */
    


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
    

