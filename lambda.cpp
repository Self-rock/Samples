#include <iostream>
#include <algorithm>
using namespace std;

int main()
{//[захватываемые переменные](передаваемые значения){тело лямбда функции}(опционально встроеные переданые значения)
    
    auto hello = [](){
        static int num=0;
        cout<<"Hello: "<<num<<" "<<endl;
        num++;
        return "return";
    };
    cout <<hello<< endl;
    hello();
    hello();
    hello();
    cout << hello()<< endl;
    
    auto sum1 = [](int x,int y){return x+y;};//лямбда с типом auto
    cout << "sum="<<sum1(3,9)<< endl;
        
    int i=22;
    int j=6;
    //с захватом внешних переменных
    auto sum3 = [i,&j]{return i+j;};//i копируется внутрь лямбда функции 
    cout << "sum3="<<sum3()<< endl;//&j доступ по ссылке к внешней переменной
    
    //со встроеными аргументами
    int sum4 = [](int x,int y){return x+y;}(17,364);
    cout << "sum4="<<sum4<< endl;
    
    //лямбда как аргумент функции
    int arr[]={1,2,3,4,5};
    cout <<"in for each ";
    for_each (arr, arr+5, [](int x){cout<<x<<", ";});
    cout<<endl;
    
    //cout<<"Hello World";

    return 0;
}