#include <iostream>
#include <vector>
#include <algorithm> //необходим для сортировки вектора
using namespace std;

template <typename T>
void VecToCout(std::vector<T>& v){
for (auto i : v) {
        std::cout << i << " ";
        } 
    cout << endl;
}

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
    if (ivec == fiveInt) cout << "ivec and  fiveInt they equal!"<< endl;// сравнили вектора
    else {cout << "ivec and  fiveInt they not equal"<< endl; }
    cout << "svec.size() = "<< svec.size() << endl;//показываем размер вектора svec
    svec.push_back("Nova");
    cout << "svec.size() after svec.push_back(Nova) = "<< svec.size() << endl;//показываем новый размер вектора svec
    cout << "svec.at(5)= "<< svec.at(5) << endl;
    svec.pop_back();
    cout << "svec.size() after svec.pop_back() = "<< svec.size() << endl;//показываем новый размер вектора svec
    if (fiveInt.empty()) cout << "fiveInt empty"<< endl;// проверяем не имеет ли вектот нулевой размер 
    cout << "fiveInt not empty"<< endl;
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
    //выводим вектор 
    cout << "ivec полностью = " << endl; 
    VecToCout(ivec);
    // сортируем вектор (для сортировки нужен #include <algorithm>)
    sort(ivec.begin(), ivec.end());
    //выводим содержимое вектора после сортировки
    cout << "ivec после сортировки = " << endl; 
    VecToCout(ivec);
    vector<int> v={1,2,3,4,5,6,7,8,9,9,9};//для след строки нужен #include <algorithm>
    for_each(v.begin(), v.end(), [](int& a){a = a*a;});//умножаем каждый элемент на самого себя
    cout << "vector v after for_each(v.begin(), v.end(), [](int& a){a = a*a;})= "; 
    VecToCout(v);    
    cout << "вывод вектора через for_each(v.begin(), v.end(), [](int a){cout << a << ' ';}) " << endl;
    for_each(v.begin(), v.end(), [](int a){cout << a << ' ';});//вывод вектора через for_each
    vector <int> tmp;
    cout << endl;
    unique_copy (v.begin(), v.end(), std :: back_inserter(tmp));//поиск уникальных элементов 
    //и вставка их в конец вектора или списка    
    cout << "вектор tmp после  unique_copy (v.begin(), v.end(), std :: back_inserter(tmp)); " << endl;
    VecToCout(tmp);
    tmp.assign(18,9);
    cout << "вектор tmp после  tmp.assign(18,9) " << endl;
    VecToCout(tmp);
    tmp.clear();
    cout << "вектор tmp после  tmp.clear() " << endl;
    VecToCout(tmp);
    cout << "tmp.size() после tmp.clear() = "<< tmp.size() << endl;
    //сортировка векторов стрингов по размеру стрингов (не проверено)
    //std::sort(array.begin(), array.end(), [](std::string const& s1, std::string const& s2) { return s1.size() < s2.size(); });
    

    cout << endl;


    //return 0;
}