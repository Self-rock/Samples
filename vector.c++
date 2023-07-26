#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char** argv) {
    vector <int> ivec={1,2,3,4,5,6,7,8,9};//создаем вектор  целых чисел
    vector <string> svec={"Vova","V","o","v","a"};//создаем вектор строк
    vector <int> fiveInt(5);//создаем вектор на 5 int
    vector <string> fiveString;//создаем пустой вектор стринг
    fiveString.reserve(5);//растягиваем его на 5 элементов
    vector <vector <int>> vecvec;//создаем вектор векторов
    vecvec.resize(10);// увеличиваем размер вектора векторов до 10
    vecvec =   {{1, 4, 7},
                {2, 5, 8},
                {3, 6, 9}};//заполняем вектор векторов
    cout << "ivec= "<< ivec[0] << endl;
    cout << "svec= "<< svec[0] << endl;
    ivec.at(0)=8;//изменяем значение первого элемента целочисленного вектора
    svec.at(0)="Mova";//изменяем значение первого элемента строкового вектора
    //выводим на экран содержимое первых элементов векторов двумя способами
    cout << "ivec[0]= "<< ivec[0] << endl;
    cout << "ivec.at(0)= "<< ivec.at(0) << endl;
    cout << "svec[0]= "<< svec[0] << endl;
    cout << "svec.at(0)= "<< svec.at(0) << endl;
    if (ivec == fiveInt) cout << "ivec и  fiveInt Они равны!"<< endl;// сравнили вектора
    else {cout << "ivec и  fiveInt Они не равны"<< endl; }
    cout << "svec.size() = "<< svec.size() << endl;//показываем размер вектора svec
    svec.push_back("Nova");
    cout << "svec.size() after svec.push_back(Nova) = "<< svec.size() << endl;//показываем новый размер вектора svec
    cout << "svec.at(5)= "<< svec.at(5) << endl;
    svec.pop_back();
    cout << "svec.size() after svec.pop_back() = "<< svec.size() << endl;//показываем новый размер вектора svec
    if (fiveInt.empty()) cout << "fiveInt пуст"<< endl;// проверяем не имеет ли вектот нулевой размер 
    cout << "fiveInt не пуст"<< endl;
    cout << "svec.size() = "<< svec.size() << endl;
    svec.insert(svec.begin(), "Nova"); //вставляем элемент в начало вектора
    svec.insert(svec.end(), "Korova");//вставляем элемент в конец вектора
    cout << "svec.size() after two Insert() = "<< svec.size() << endl;
    cout << "svec.front() = "<< svec.front() << endl; //выводим первый элемент через svec.front()
    cout << "svec.back() = "<< svec.back() << endl;//выводим последний элемент через svec.back()
    svec.erase (svec.end());//удаляем последний элемент вектора svec
    cout << "svec.size() after svec.erase (svec.end()) = "<< svec.size() << endl;
    cout << "svec.back() = "<< svec.back() << endl;
    cout << "svec.size()  = "<< svec.size() << endl;
    cout <<"svec.capacity()= " <<svec.capacity()<< endl;//capacity - вместимость коллекции 
    //определяет реальный размер - то есть размер буфера коллекции, а не то, сколько в нем хранится элементов
    cout << "ivec= "<< ivec[0] << endl;
    
    return 0;
}