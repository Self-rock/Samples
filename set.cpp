#include <set>
#include <iostream>

using namespace std; 

template <typename T>
void listset(T& a) {
for (auto i:a) cout <<i<<endl;
}

int main()
{
    //set<int> s (v.begin(), v.end());//создание с заполнением из вектора
    set<int> intset ={1,56,982,15454,34,7,1};
    listset(intset);
    set<string> stringset={"first","second","third","meny"};
    listset(stringset);
    cout<<"Hello World";

    return 0;
}