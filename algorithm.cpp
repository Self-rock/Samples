#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
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
    set_difference();
    set_symmetric_difference();
    min_element();
    max_element();
    
    */

    string str {"Hi everiver"};
    cout<<str<<endl;
    //sort(str.begin(), str.end());//не универсальный вариант
    sort(begin(str), end(str));//универсальный вариант сортировки
    cout<<str<<endl;

    return 0;
}