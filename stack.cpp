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
    st.push(4);
    st.push(8);
    st.push(19);
    st.push(186);
    st.push(3);
    cout <<"stack st = ";
    stackprint(st);

    return 0;
}
