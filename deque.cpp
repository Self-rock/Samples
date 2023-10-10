#include <iostream>
#include <deque>

using namespace std;

template <typename T>
void dqprint(T deq){
    while (!deq.empty())
    {
        cout << deq.front()<<" ";
        deq.pop_front();
        //cout << deq.back();
        //deq.pop_back();

    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    deque<int> dq;
    deque<int> dq2;
    
    dq.push_back(2);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);
    dqprint(dq);

    dq.push_back(2);
    cout << "size deque "<< dq.size()<<endl;
    dq.clear();
    cout << "size deque after dq.clear() "<< dq.size()<<endl;
    
    dq2.push_back(28);   
    dq.swap(dq2);
    cout << "dq after dq.swap(dq2) "<<endl;
    dqprint(dq);
    
    return 0;
}
