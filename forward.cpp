#include <iostream>
#include <utility>

void inner(int&& x){
    std::cout<<" RValue x: "<<x<<"\n";
}
void inner(int& x){
    std::cout<<" LValue x: "<<x<<"\n";
}

template <typename T>
void wrapper(T&& arg){
    inner(std::forward<T>(arg));
}
int main(int argc, char const *argv[])
{
    int x=5;
    wrapper(x);//x is lvalue, forwarded as lvalue
    wrapper(50);//50 is rvalue, forwarded as rvalue
    return 0;
}


