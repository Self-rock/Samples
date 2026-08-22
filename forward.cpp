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


/*

#include <utility>
#include <string>
#include <iostream>

//- std::move(obj) — безусловно превращает объект в rvalue. 
//После этого объект считается "пустым" для повторного использования (в рамках контракта move). 
//Используем, когда мы точно хотим "забрать" ресурсы.

//- std::forward<T>(obj) — условно делает rvalue, если изначально пришёл rvalue. 
//То есть это "perfect forwarding" для шаблонных функций.

template <typename T>
void wrapper(T&& arg) {
    process(std::forward<T>(arg)); // сохраняет rvalue/lvalue-семантику
}

void process(const std::string& s) { std::cout << "Lvalue: " << s << '\n'; }
void process(std::string&& s) { std::cout << "Rvalue: " << s << '\n'; }

int main() {
    std::string str = "Hello";
    wrapper(str);               // Lvalue
    wrapper(std::move(str));    // Rvalue
}

//- std::move - "забрать".
//- std::forward - "передать как есть".

*/

