#include <iostream>
#include <list>
#include <vector>
#include <numeric>
using namespace std;

template <typename T>
void ContPtint(T v){
for (auto i : v) {
        std::cout << i << " ";
        } 
    cout << endl;
}

int main()
{
    list<int> lint {2,6,9,4};
   
    //считаем сумму чисел в массиве
    int result = accumulate(begin(lint), end(lint), 0);
    cout<<"sum lint = "<<result<<endl;
    //считаем сумму чисел зачение которых более 5 (a результат, b очередной элемент)
    result = accumulate(begin(lint), end(lint), 0, [](int a, int b){
        if (b>5)return a+b;
        else return a;
    });
    cout<<"sum elements above 5 in lint = "<<result<<endl;
    //перемножаем элементы в массиве (a результат, b очередной элемент)
    result = accumulate(begin(lint), end(lint), 1, [](int a, int b){
        return a*b;        
    });
    cout<<"multiply lint = "<<result<<endl;

    
    

    return 0;
}