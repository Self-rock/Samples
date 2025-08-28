#include <iostream>
#include <string>
#include <algorithm>
#include <locale.h>
using namespace std;

int main()
{
    
    
    //подсчет русских букв п в смешанной русско английской строке
    u32string str{U"kdsпajfkads fkasdj ksпппadj fkпsdaj f q"};
    auto pred = [](char32_t a){
        return a==L'п'?1:0;
    };    
    std::cout<<"simbols = "<<count_if(str.begin(), str.end(), pred);

    std::cout<<endl;
    
    //Разворот строки на русском    (в эмуле работает, тут нет)
    /*
    wstring str2 {L"Красота"}, tmp; 
    for (auto i = str2.rbegin(); i < str2.rend(); i++){
        tmp+= (*i);
    }  
    wcout<<"tmp = "<<tmp;
    std::cout<<endl;*/


    //для установки локали для терминала, перед cin cout применить
    //system("chcp 65001");//для utf8 , или другую локаль, в которой сохранены исходники
    //system("chcp 65001 > nul"); то же самое, чтобы консоль не выводила сообщение "Active code page: 65001"
    return 0;
}