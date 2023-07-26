#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string S, in, app, ins; 
    ins = {"-*-"};
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
    cout<<"return first item app = "<<app.front()<<endl; //выводим значение первого элемента
    app.push_back('y'); // добавляем последний элемент 'y'
    cout<<"return last item app after app.push_back('y') = "<<app.back()<<endl; //выводим значение последнего элемента
    cout<<"app now "<<app<<endl;
    app.pop_back(); //удаляем последний символ
    cout<<"app after app.pop_back() "<<app<<endl;
    app.insert(2,1,'k'); //вставляем в строку app, во 2 позицию (считаем с 0), один символ 'k'
    cout<<"app after app.insert(2,1,'k') "<<app<<endl;
    app.insert(4, ins);//вставляем в строку app, в 4 позицию (считаем с 0), строку ins
    cout<<"app after app.insert(4, ins) "<<app<<endl;
    app.insert(8, ins, 1, 2);//вставляем в строку app, в 8 позицию (считаем с 0), из строки ins, 2 символа, начиная с позиции 1 (считаем с 0)
    cout<<"app after app.insert(8, ins, 1, 2) "<<app<<endl;
    cout<<"app.substr(3) "<<app.substr(3)<<endl; //выводим содержимое строки app с 3 элемента(считаем с 0), до конца строки
    cout<<"app.substr(3,5) "<<app.substr(3,5)<<endl;//выводим 5 элементов строки app начиная с 3 элемента(считаем с 0)
    app.replace(11, 3, ins, 0, 3); //заменяем 3 символа в строке app, начиная  с 11 символа, на 3 символа из строки ins, начиная с 0 символа
    cout<<"app.replace(11, 3, ins, 0, 3) "<<app<<endl;
    cout<<"app.size()="<<app.size()<<endl;
    app.replace (0, 21, 21, 's');// заменяем 21 символа строки app, начиная с 0, на 21 символ 's' 
    cout<<"app = "<<app<<endl;
    app.replace (2, 3, ins, 0, 3);//// заменяем 3 символа строки app, начиная с 2, на 3 символа строки ins, начиная с 0 элемента
    cout<<"app = "<<app<<endl;
    cout<<"ins into app placed at "<<app.find(ins, 0)<<" item"<<endl;// ищем вхождение строки ins  в строку app слева направо, 
    //показываем номер элемента где в строке app находится строка ins 
    cout<<"app = "<<app<<endl;
    cout<<"ins = "<<ins<<endl;
    cout<<"swaped app and ins"<<endl;
    app.swap(ins); // меняем местами содержимое app и ins
    cout<<"app = "<<app<<endl;
    cout<<"ins = "<<ins<<endl;
    app.swap(ins);
    app.at(5)='S';
    cout << "Исходный app " <<app << endl;
    /*transform()  требует наличия #include <algorithm>, app.begin() начало откуда берем,
    app.end() конец, откуда берем,  еще один app.begin() начало куда кладем и во что
    превращаем, tolower в нижний регистр, toupper в верхний регистр */
    transform(app.begin(),app.end(),app.begin(),::tolower);
    cout << "app после transform(app.begin(),app.end(),app.begin(),::tolower) " <<app << endl;
    transform(app.begin(),app.end(),app.begin(),::toupper);
    cout << "app после transform(app.begin(),app.end(),app.begin(),::toupper) " <<app << endl;
    string unsort = {"gKaD5b5#&mvH6c4"};
    cout << "Исходный unsort " <<unsort << endl;
    sort(unsort.begin(), unsort.end());// сортировка массива string (на русских буквах виснет)
    cout << "unsort после сортировки " <<unsort << endl; 
    
    
    cin >>in;
    return 0;
}
