#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S, in, app; 

    S = string(10, 'z');//инициализация класса стринг 10 символами z
    cout<<S<<endl;
    cin >> in; //инициализация класса стринг из пользовательского ввода
    cout<<in<<endl;
    app = S+in; //добавляем in в конец S
    cout<<app<<endl;
    cout<<"Size app="<<app.size()<<endl; // определяем размер app
    app.resize(50); // изменяем размер app
    cout<<"New size app="<<app.size()<<endl;
    in.clear(); // очищаем in, строка становится пустой
    // если строка in пуста, выводим ее размер
    if (in.empty()) cout<<"String in is empty, end equal "<<in.size()<<endl;
    cout<<"app befor app.push_back('v') "<<app<<endl;
    app.push_back('v'); // добавляем символ v в конец строки app
    cout<<"app after app.push_back('v') "<<app<<endl;
    cout<<"New size app="<<app.size()<<endl;
    app.append(S); // присоединяем строку S в конец строки app
    cout<<"app after app.append(S) "<<app<<endl;
    app.append(S, 4, 5); //добавляем в конец строки app 5 симвовлов строки S, начиная с позиции 4 (строки S) 
    cout<<"app after app.append(S, 4, 5) "<<app<<endl;
    app.erase(24, 25); // удаляем из app 25 символов начиная с 24 позиции
    cout<<"app after app.erase(25, 25) "<<app<<endl;
    app.erase(15); // удаляем из app начиная с 15 позиции и до конца строки
    cout<<"app after app.erase(15) "<<app<<endl;
    cout<<"New size app="<<app.size()<<endl;
    cout<<"10 item app (first elem 0) ="<<app.at(10)<<endl;//показываем 10 элемент (нумерация с 0)
    app.at(10)='s';
    cout<<"10 item app after app.at(10)='s' = "<<app.at(10)<<endl; // изменяем значение 10 элемента app на s

    
    cin >>in;
    return 0;
}