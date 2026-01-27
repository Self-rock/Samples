#include <string>
#include <cstring>//для сишных стрингов



int main(int argc, char const *argv[])
{
    std::string str;
    char c_str[50]={"Hello world\0"};
    puts(c_str);//вывод строки с автопереводом строки
    printf("Lenght c_str=%d\n", strlen(c_str));//вывод длинны строки
    
    char c_str2[50];
    printf("Vvedite ne bolee 49 simvolov\n");
    scanf("%49s", c_str2);// читаем 49 символов из ввода в массив.. или до первого пробела
    puts(c_str2);

    return 0;
}

//fgets(buf, MAXLEN, stdin); //получение строки максимальной длинны MAXLEN, из stdin, в буфер char buf[MAXLEN+1]
//позволяет ввести строку в стиле С, которая включает пробелы

//  void* memmove( void* dest, const void* src, std::size_t count );
/*
char str[] = "1234567890";
    std::cout << str << '\n';
    std::memmove(str + 4, str + 3, 3); // copies from [4, 5, 6] to [5, 6, 7]
    std::cout << str << '\n';
    принимает аргументы типа void * и const void *, 
    что позволяет ей работать с любыми типами данных. 
    Она просто копирует указанное количество байтов из исходного буфера в целевой.
*/

/*
char* strcpy(char* dest, const char* source)  - копирует строку source в строку dest. 
Результат функции – указатель на результирующую строку (он равен указателю на dest). 
Можно результат функции проигнорировать. Аргументы этой функции должны быть строками, т.е. содержать нулевой байт. 
В Visual Studio нужно использовать  strcpy_s().

char* strncpy(char* dest, const char* source, size_t num) - копирует не более num символов из строки source в начало строки dest. 
Если нулевой байт не вошел в число копируемых символов, то результат будет содержать «микс» из старого и нового содержимого строки.

char* strcat(char* dest, const char* source) - конкатенация (объединение) строки source со строкой dest . 
Результат сохраняется в  dest (нуль-символ добавляется в конец). Фактически строка source копируется в конец строки dest. 
Программист должен позаботиться о том, чтобы объединенная строка поместилась в память, 
отведенную под dest (если соседняя память будет испорчена, то возникнет ошибка времени выполнения). 
В Visual Studio нужно использовать  strcat_s().

char* strncat(char* dest, char* source, size_t num) - добавляет в конец  строки dest не более num символов из строки source.  
Нуль-символ остается “в наследство” от строки dest 
(т.е. символы строки-источника фактически вставляются между последним значащим символом dest и нулевым байтом). 
В Visual Studio нужно использовать  strncat_s().

strxfrm 
transform a string so that strcmp would produce the same result as strcoll
String examination

size_t strlen(char* s)  - вычисляет количество значимых символов в строке (‘\0’ не учитывается). 

int strcmp(const char* s1, const char* s2) – сравнивает две строки в лексикографическом порядке. 
Возвращает отрицательное число, если s1<s2, ноль, если s1==s2 и положительное число, если s1>s2.

int strncmp(const char* s1, const char* s2, size_t num) -  сравнивает первые num символов строки s1 с первыми num символами строки  s2. 
Сравнение в лексикографическом порядке и результат аналогичен функции strcmp.

strcoll 
compares two strings in accordance to the current locale

char* strchr(const char* s, int c) – ищет в строке s первое вхождение символа c, начиная с начала строки. 
В случае успеха возвращает указатель на найденный символ, иначе – возвращает NULL (это функция C, а nullptr появился в С++)

char* strrchr(const char* s, int c) – аналогично предыдущему, только поиск осуществляется с конца строки.

strspn 
returns the length of the maximum initial segment that consists
of only the characters found in another byte string

strcspn 
returns the length of the maximum initial segment that consists
of only the characters not found in another byte string

strpbrk 
finds the first location of any character from a set of separators

char* strstr(const char* s1, const char* s2) – ищет в строке s1 подстроку s2. 
Возвращает указатель на первый символ подстроки внутри s1. Если подстрока отсутствует – возвращает NULL.

char* strtok(char* s1, const char* s2) - Делит исходную строку s1 на лексемы (подстроки), разделенные символами из строки s2.  
Если лексема не найдена, возвращается NULL.
Во время первого вызова функции strtok() в качестве указателя в самом деле используется s1. 
При последующих вызовах в качестве первого аргумента используется NULL. Таким образом вся строка может быть разбита на лексемы.
Важно понимать, что функция strtok() модифицирует строку, на которую указывает s1. 
Каждый раз, когда найдена лексема, на месте, где был найден ограничитель, помещается нулевой символ. 
Таким образом strtok() продвигается вдоль строки.

memchr 
searches an array for the first occurrence of a character

memcmp 
compares two buffers

memset 
fills a buffer with a character

memcpy 
copies one buffer to another

memmove 
moves one buffer to another

int atoi(const char* s) – преобразует строку s в число типа int. 
Возвращает значение или нуль, если число преобразовать нельзя. 
Заголовочный файл <stdlib.h> - подключается автоматически.

long atol(const char* s) - преобразует строку s в число типа long. 
Возвращает значение или нуль, если число преобразовать нельзя. Заголовочный файл <stdlib.h>

double atof(const char* s) - преобразует строку s в вещественное число типа double. 
Возвращает значение или нуль, если число преобразовать нельзя. В строке дробная часть должна отделяться точкой.  
Число может быть представлено как в экспоненциальном формате (с символом 'e'), так и с фиксированной точкой. 
Заголовочный файл <stdlib.h>


*/