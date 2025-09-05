#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    //вывод с заданной сточностью знаков после запятой
    double a =4.5465465654654;
    std::cout<<"a="<< std::fixed<<std::setprecision(2)<<a<<"\n";
/*setprecision устанавливает «количество цифр», 
которое в зависимости от состояния std::fixed может быть либо «значащими цифрами», 
либо «цифрами после запятой», либо «цифрами после шестнадцатеричного разряда»*/


    double answer=5.9999;
    double answer2=55.1000;
    std::cout<<std::setprecision(2)<<std::fixed;
    std::cout <<"answer="<<answer << std::endl;
std::cout<<std::setprecision(0)<<std::fixed;//сбрасываем точность после запятой
    std::cout <<"answer2="<<answer2 << std::endl;

/*
    Для заполнения вывода cout не значащими символами можно использовать конструкцию  
    <<std::setfill('0') << std::setw(2)<<"выводимое с заполнением незначащими символами поле". 
    конструкция добавляется для каждого такого поля.
*/


    //для установки локали для терминала, перед cin cout применить
    //system("chcp 65001");//для utf8 , или другую локаль, в которой сохранены исходники

    /*
    не проверено
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    */
   

    return 0;
}
