#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> listint;
    listint.push_back(2);
    listint.emplace_back(4);
    listint.push_front(5);
    listint.emplace_front();

    cout<<"Hello World"<<endl;

    return 0;
}