#include <iostream>
#include <list>
using namespace std;

template <typename T>
void listprint(T a) {
for (auto i:a) cout <<i<<endl;
}

int main()
{
    list<int> listint;
    list<string> liststring;
    liststring.push_back("test1");
    liststring.push_back("test2");
     listprint(liststring);    
    listint.push_back(2);
    listint.emplace_back(4);
    listint.push_front(5);
    listint.emplace_front();
    cout <<"listint.size() " << listint.size()<<endl;
    listprint(listint);
    //for (auto i:listint) cout <<i<<endl;
    cout<<"Hello World"<<endl;

    return 0;
}