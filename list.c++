#include <iostream>
#include <list>
using namespace std;

template <typename T>
void listprint(T& a) {
for (auto i:a) cout <<i<<endl;
}

bool biger5(int n) {
        return (n > 5);
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
    listint.resize(3);//изменяем размер (обрезаем)
    cout<<"listint after listint.resize(3)"<<endl;
    listprint(listint);
    listint.resize(5);//изменяем размер (добавляются эл-ы со знач. по умолч.)
    cout<<"listint after listint.resize(5)"<<endl;
    listprint(listint);
    cout<<"listint.front() "<<listint.front()<<endl;//доступ к первому элементу списка
    listint.front()=22;//меняем значение первого элемента в списке
    cout<<"listint.back() "<<listint.back()<<endl;//доступ к последнеме элементу списка
    listint.back()=25;//меняем значение последнего элемента в списке
    cout<<"listint.front() after change "<<listint.front()<<endl;
    cout<<"listint.back() after change "<<listint.back()<<endl;
    cout<<"listint now"<<endl;
    listprint(listint);
    cout <<"listint.size() " << listint.size()<<endl;
    listint.pop_front();
    listint.pop_back();
    cout<<"listint after listint.pop_front() and listint.pop_back()"<<endl;
    listprint(listint);
    cout <<"listint.size() after listint.pop_front() and listint.pop_back()= " << listint.size()<<endl;
    listini.erase(listint.cbegin());
    cout<<"listint after listini.erase(listint.cbegin())"<<endl;
    listprint(listint);
    /* //удаляем содержимое всего списка
    listini.erase(listint.cbegin(), listint.cend());
    cout <<"listint.size() " << listint.size()<<endl;//поразываем размер спаска
    cout<<"listint"<<endl;
    listprint(listint); */
    list<int> list1={88,99,564};
    list<int> list2={44,55,368};
    cout<<"list1 "<<endl;
    listprint(list1);
    cout<<"list2 "<<endl;
    listprint(list2);
    list1.swap(list2);//меняем местами значения списков list1 и list2
    cout<<"after list1.swap(list2) "<<endl;
    cout<<"list1 "<<endl;
    listprint(list1);
    cout<<"list2 "<<endl;
    listprint(list2);
    list1.clear();
    cout<<"list1 after list1.clear() "<<endl;
    listprint(list1);
    cout <<"list1.size() " << list1.size()<<endl;
    cout<<"listint now"<<endl;
    listprint(listint);
    listint.remove(88);//удаляем элемент списка по значению
    cout<<"listint after listini.remove(88) "<<endl;
    listprint(listint);
    listint.push_back(28);
    cout<<"listint after listint.push_back(28) "<<endl;
    listprint(listint);    
    listint.remove_if(biger5);//удаление элемента списка по условию 
    //условие biger5 функция определенная вверху
    cout<<"listint after listint.remove_if(foo) "<<endl;
    listprint(listint);
    listint.push_back(28);
    listint.push_back(28);
    cout<<"listint now"<<endl;
    listprint(listint);
    listint.unique();//удаление из списка не уникальных значений
    cout<<"listint after listint.unique() "<<endl;
    listprint(listint);
    listint.merge(list2);//добавляем содержимое list2 к listint (list2 при этом обнуляется)
    cout<<"listint after listint.merge(list2)"<<endl;
    listprint(listint);
    listint.reverse();//разворачиваем список наоборот
    cout<<"listint after listint.reverse()"<<endl;
    listprint(listint);
    listint.sort();
    cout<<"listint after listint.sort()"<<endl;
    listprint(listint);
    list<int> emptylistint;
    //проверяем не пустой ли список emptylistint
    if (emptylistint.empty()) cout<<"emptylistint is empty"<<endl;
    list<int>::iterator it=listint.begin();//создаем итератор и устанавливаем его на начело списка
    advance(it,3);//устанавливаем итератор на 3 элемент
    cout<<"print el-t list after iterator"; //выводим значение эл-та списка
    cout<<"it=listint.begin() and advance(it,3) "<<*it<<endl; // по итератору
    

    cout<<"Hello World"<<endl;
    return 0;
}