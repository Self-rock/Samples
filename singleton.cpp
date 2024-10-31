#include <iostream>
/*Паттерн "Одиночка" (Singleton) является одним из паттернов проектирования, 
который используется для создания класса, имеющего только один экземпляр в системе, 
и предоставляющего глобальную точку доступа к этому экземпляру. Это означает, 
что в рамках приложения может существовать только один объект данного класса, 
и любой запрос на создание нового экземпляра будет возвращать ссылку на существующий.*/
class Singleton{
private:
    static Singleton* instance;
    Singleton(){}//закрытый конструктор
public:
    static Singleton* getInstance(){ //создание единственного экземпляра
        if(!instance) instance = new Singleton;
        return instance;
    }
    void showMessage(){
        std::cout<<"Hello from singleton!\n";
    }
};

    Singleton* Singleton::instance = nullptr;

int main()
{
    Singleton::getInstance()->showMessage();

    return 0;
}