#include <iostream>
#include <list>
using namespace std;

template <typename T>
void listprint(T a) {
for (auto i:a) cout <<i<<endl;
}

int main()
{
    list<int> listint;//создаем список int
    list<int> listini={88,99,564};//создаем и инициализируем список int
    cout<<"listini"<<endl;
    listprint(listini);
    list<string> liststring;//создаем список string
    liststring.push_back("test1");//добавляем в зад списка значение
    liststring.push_back("test2");
    cout<<"liststring"<<endl;
    listprint(liststring);    
    listint.push_back(2);//добавляем в зад списка значение
    listint.emplace_back(4);//добавляем в зад списка значение
    listint.push_front(5);//добавляем в перед списка значение
    listint.emplace_front();//добавляем в перед списка значение 0
    cout <<"listint.size() " << listint.size()<<endl;//поразываем размер спаска
    cout<<"listint"<<endl;
    listprint(listint);
    listint.assign(5, 88);
    cout<<"listint after listint.assign(5, 88)"<<endl;
    listprint(listint);
    
    
    cout<<"Hello World"<<endl;

    return 0;
}