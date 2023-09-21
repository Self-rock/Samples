#include <set>
#include <iostream>
using namespace std; 

template <typename T>
void printset(T& a) {
for (auto i:a) cout <<i<<endl;
}

int main()
{   string strtomap = {"123"};//заполнение map из стринга
    set<char> set1(begin(strtomap), end(strtomap));
    cout<<"from string to map, map now"<<endl;
    printset(set1); 
    cout<<endl;    
    //set<int> s (v.begin(), v.end());//создание с заполнением из вектора
    set<int> intset ={1,56,982,15454,34,7,1};
    printset(intset);
    set<string> stringset={"first","second","third","meny"};
    printset(stringset);
    set<int> emptyset;
    if (emptyset.empty()) cout<<"emptyset empty"<<endl;//проверяем set на пустоту
    cout<<"size intset="<<intset.size()<<endl;//определяем размер set
    intset.swap(emptyset);//меняем содержимое intset и emptyset местами
    cout<<"emptyset after intset.swap(emptyset) ="<<endl;
    printset(emptyset);
    intset.swap(emptyset);//меняем обратно
    cout<<"intset after repeat intset.swap(emptyset)="<<endl;
    printset(intset);
	intset.emplace(889);//добавляем элемент
    cout<<"intset after intset.emplace(889)"<<endl;
    printset(intset);
    intset.insert(5525);//добавляем элемент
    cout<<"intset after intset.insert(5525)"<<endl;
    printset(intset);    
    intset.erase(982);//удаляем элемент по значению
    cout<<"intset after intset.erase(982)"<<endl;
    printset(intset);
    //intset.erase(intset.begin(),intset.end());//удаляет все содержимое set
    intset.erase(intset.begin());//удаляем первый элемент intset (последний по end не удаляет)
    cout<<"intset after intset.erase(intset.begin())"<<endl;
    printset(intset);
    //intset.clear();//очищает все содержимое set
    //cout<<"intset after intset.clear()"<<endl;
    //printset(intset);
    //ищем элемент в сете
    if (intset.find(889)!=intset.end()) cout << "i find element 889"<<endl;
    set<int>::iterator it = intset.find(889);//создаем итератор и заполняем его значение по поиску
    intset.erase(it);//удаляем значение 889 по итератору
    cout<<"intset after intset.erase(it))"<<endl;
    printset(intset);
    
    cout<<"iterator search"<<endl;   
    set<int>::iterator start = intset.lower_bound(34); // first not less then fst
    set<int>::iterator fin = intset.upper_bound(100); // first greater then snd
    for (auto i=start; i!=fin; i++){
    cout<<"i= "<<*i<<endl;
    }

    cout<<"Hello World";

    return 0;
}