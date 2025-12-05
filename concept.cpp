#include <iostream>
#include <string>
#include <vector>
#include <type_traits>//для концептов

using namespace std;
template <class T>
concept Sumable = requires(T t){//создаем концепт
    t + t;//проверяемое выражение
};

template <Sumable T>
T sum(const T& a, const T& b){
    return a+b;
}

int main(int argc, char const *argv[])
{
    cout<<"Сумма интов "<<sum(3, 2)<<"\n";
    cout<<"Сумма флоатов "<<sum(3.5, 2.8)<<"\n";
    cout<<"Сумма стрингов "<<sum(string("Привет "), string("всем"))<<"\n";
    //cout<<"Сумма векторов "<<sum(vector<int>{1, 2, 3}, vector<int>{4, 5, 6})<<"\n";//ошибка
    vector<int> a{1, 2, 3}; 
    vector<int> b{4, 5, 6};
    //vector<int> c = sum(a, b);//тоже ошибка
    
    
    return 0;
}

