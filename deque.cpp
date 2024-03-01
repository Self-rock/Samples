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
    deque<int> dq;//создание двусторонней очереди
    deque<int> dq2;
    
    dq.push_back(2);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);
    cout <<"dq[1]="<<dq[1]<< endl;//доступ к элементу с индексом 1(если индекс некорректен, возможно неопределенное поведение)
    cout <<"dq.at(0)="<<dq.at(0)<< endl;//доступ к элементу с индексом 0(при обращении по некорректному индексу она генерирует исключение out_of_range)
    try{
        dq.at(1000) = 1;//вводим неправельный индекс
    }
    catch (const out_of_range&)
    {
        cout << "Incorrect index" << std::endl;//ловим исключение на неправельный индекс
    }
    cout <<"dq.front()="<<dq.front()<< endl;//доступ к элементу front
    cout <<"dq.back()="<<dq.back()<< endl;//доступ к элементу back
    
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
