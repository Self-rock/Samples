#include <iostream>
#include <list>
#include <numeric>
using namespace std;

int main()
{
    list<int> lint {2,6,9,4};
    //считаем сумму чисел в массиве
    int result = accumulate(begin(lint), end(lint), 0);
    cout<<"sum lisnt = "<<result<<endl;
    //считаем сумму чисел зачение которых более 5
    result = accumulate(begin(lint), end(lint), 0, [](int a, int b){
        if (b>5)return a+b;
        else return a;
    });
    cout<<"sum elements above 5 in lisnt = "<<result<<endl;
    //перемножаем элементы в массиве
    result = accumulate(begin(lint), end(lint), 1, [](int a, int b){
        return a*b;        
    });
    cout<<"multiply lisnt = "<<result<<endl;

    return 0;
}