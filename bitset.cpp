#include <iostream>
#include <bitset>
#include <string>

#define SET_BIT(val, bitIndex) val |= (1 << bitIndex) // установить бит номер bitIndex (начиная с нулевого) в val 
#define CLEAR_BIT(val, bitIndex) val &= ~(1 << bitIndex) // очистить бит номер bitIndex (начиная с нулевого) в val
//#define READ_BIT(val, bitIndex) ((val)&(bitIndex)) // не работает
#define TOGGLE_BIT(val, bitIndex) val ^= (1 << bitIndex) // изменить на противоположный бит номер bitIndex (начиная с нулевого) в val
#define BIT_IS_SET(val, bitIndex) (val & (1 << bitIndex)) // проверка значения бита (в единице ли он)
//напр if (BIT_IS_SET(macr, 1)) printf("%d\n", macr); если бит 1 в macr не ноль выполнямем принтф 

//#define _BV(bit) (1 << bit) //Возвращает 2 в степени bit
//#define BIT_IS_CLEAR(val, bit) (~val) & _BV(bit) //проверка значения бита (в нуле ли он) требует макроса _BV (не работает)

/*
value |= 1 << N;    // установить бит N
value &= ~(1 << N); // сбросить бит N
value ^= (1 << N);  // переключить бит N
*/

using namespace std;

int main()
{
    bitset<4> forbits;//инициализация нулями
    bitset<5> fivebits {"10101"};//инициализация (строка в битсет)
    bitset<6> sixbits {0b111001};// инициализация бинарным литералом
    bitset<8> eightbits {0xF1};// инициализация шеснадцатеричным литералом
    bitset<5> a {"11101"};
    bitset<5> b(a);// инициализация b из a
    cout<<"forbits "<<forbits<<endl;
    cout<<"fivebits "<<fivebits<<endl;
    cout<<"sixbits "<<sixbits<<endl;
    cout<<"eightbits "<<eightbits<<endl;
    cout<<"bitset a "<<a<<endl;
    cout<<"bitset b "<<b<<endl;
    cout<<"size(b) bitset b "<<size(b)<<endl;//определяем размер битсета
    string str = b.to_string();//преобразуем битсет в строку
    cout<<"str "<<str<<endl;
    /* не работает
    bitset<8> zerobits;//битсет заполненый нулями
    cout<<"zerobits "<<zerobits<<endl;
    "10001001" >> zerobits; // заполнение битсет значениями из строки
    cout<<"zerobits "<<zerobits<<endl;*/
    bitset<5> result(fivebits & a); //создание с логической опирацией межуд аргументами, возможны операции
    // & и, | или, ^ исключающее или, ~ побитовое НЕ
    cout<<"result "<<result<<endl;
    //result =>>(2);//сдвиг вправо на 2 бита не работает
    //result =<<(2);//сдвиг влево на 2 бита не работает
    
    //int res = 1;//сдвиг влево на 1 бит  работает
    //res = res << 1;

    cout<<"result[2] "<<result[2]<<endl;//смотрим содержимое 2 бита справа (нумерация с 0)
    result[0]=0;//устанввливаем значение 0 бита в ноль
    cout<<"result "<<result<<endl;
    result.set();//устанавливаем все быты в 1
    cout<<"result after result.set() "<<result<<endl;
    result.set(3, 0);//устанавливает в ноль третий бит
    cout<<"result after result.set(3, 0) "<<result<<endl;
    result.reset();//сбрасывает все быты в 0
    cout<<"result after result.reset() "<<result<<endl;
    result.set();
    cout<<"result "<<result<<endl;
    result.reset(4);//сбрасывает 4 бит в ноль
    cout<<"result after result.reset(4) "<<result<<endl;
    result.flip();//инвертирует биты в битсет
    cout<<"result after result.flip() "<<result<<endl;
    cout<<"result.size()= "<<result.size()<<endl;//показывает размер битсета
    cout<<"result.count()= "<<result.count()<<endl;//показывает количество установленных битов в битсете
    cout<<"result.to_ulong() "<<result.to_ulong()<<endl;//преобразуем битсет в беззнаковое длинное число
    
    int test=0;
    cout<<"test "<<test<<endl;
    SET_BIT(test, 2);
    cout<<"test "<<test<<endl;
    CLEAR_BIT(test, 2);
    cout<<"test "<<test<<endl;
    TOGGLE_BIT(test, 2);
    cout<<"test "<<test<<endl;
    cout<<"BIT_IS_SET(test, 2) "<<BIT_IS_SET(test, 2)<<endl;
    
    return 0;
}
