#include <iostream>
#include <stack>
#include <vector>
using namespace std;

template <typename T>
void stackprint(T& a){
while (!a.empty()) {
        std::cout << a.top() << " ";
        a.pop();
    }
}

int main(int argc, char const *argv[])
{
    stack<int> st;//создаем объект st типа стак и заполняем его
    stack<int> st2;
    st.push(4);
    st.push(8);
    st.push(19);
    st.push(186);
    st.push(3);
    cout <<"st.size() befor stackprint(st) = "<<st.size()<<endl;
    cout <<"stack st = ";
    stackprint(st);
    cout <<endl<<"st.size() after stackprint(st) = "<<st.size()<<endl;
    
    st.push(8);//заново заполняем st значениями, st2 пустой
    st.push(186);
    cout <<"st.size()  = "<<st.size()<<endl;
    cout <<"st2.size()  = "<<st2.size()<<endl;
    st.swap(st2);
    cout <<"st.size() after st.swap(st2); = "<<st.size()<<endl;
    cout <<"st2.size() after st.swap(st2); = "<<st2.size()<<endl;
    if (st.empty()) cout <<"st empty"<<endl;
    
    
    //a.top();//получение значения с вершины стека
    //a.pop();//удаление значения с вершины стека

    return 0;
}
