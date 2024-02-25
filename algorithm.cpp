#include <iostream>
#include <string>
#include <algorithm>
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
    unique();
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
    includes();
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
    count();//  count(str.begin(), str.end(), 'x')
    count_if();
    search();
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
    
    //возвращает итератор на минимальный элемент контейнера
    cout << "min_element test "<<*min_element(test.begin(), test.end())<<endl;
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

    return 0;
}