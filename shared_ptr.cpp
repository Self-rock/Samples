#include <memory>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    std::shared_ptr<int> ptr = std::make_shared<int>(42); //создаем умный shared указатель
    std::shared_ptr<int> ptr2 = ptr;
    
    std::cout << *ptr2 << std::endl;  // 42  разименовываем указатель и выводим значение на которое он указывает
    cout<<"Use count ptr2 "<<ptr2.use_count()<<endl; // выводим значение счетчика

    std::weak_ptr<int> wptr = ptr;//не увеличивает счетчик на который ссылается
    cout<<"Use count wptr "<<wptr.use_count()<<endl; // выводим значение счетчика
    
    
    return 0;
}