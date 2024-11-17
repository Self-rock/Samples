#include <iostream>
#include <queue>

using namespace std;


int main(int argc, char const *argv[])
{
    //создание очереди
    priority_queue<int> q;
    q.push(5);
    q.push(2);
    q.push(8);
    q.push(1);
    q.push(19);
    
    cout<<"Элементы по убыванию\n";
    while (!q.empty())
    {
        cout<<q.top()<<" \n";
        q.pop();
    }
    
    //изменение приоритета
    using queue_type = std::priority_queue<int, std::vector<int>, std::greater<int>>;
    queue_type q2;
   
    q2.push(5);
    q2.push(2);
    q2.push(8);
    q2.push(1);
    q2.push(19);
    
    cout<<"Элементы по возрастанию\n";
    while (!q2.empty())
    {
        cout<<q2.top()<<" \n";
        q2.pop();
    }
    return 0;
}