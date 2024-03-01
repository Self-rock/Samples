#include <iostream>
#include <queue>

using namespace std;


int main(int argc, char const *argv[])
{
    queue<int> q;//создание очереди
    deque<int> q2;
    q.push(1);
    q.push(2);
    q.emplace(3);
    cout <<"q.back() "<<q.back()<<endl;
    q.back()=5;
    cout <<"q.back() after q.back()=5 "<<q.back()<<endl;
    q.back()=3;
    cout <<"q.front() "<<q.front()<<endl;
    q.pop();
    cout <<"q.front() after q.pop() "<<q.front()<<endl;

    cout << "size queue "<< q.size()<<endl;
   
    
   
    return 0;
}
