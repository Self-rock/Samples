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
strcpy 
copies one string to another

strncpy 
copies a certain amount of characters from one string to another

strcat 
concatenates two strings

strncat 
concatenates a certain amount of characters of two strings

strxfrm 
transform a string so that strcmp would produce the same result as strcoll
String examination

strlen 
returns the length of a given string

strcmp 
compares two strings

strncmp 
compares a certain number of characters from two strings

strcoll 
compares two strings in accordance to the current locale

strchr 
finds the first occurrence of a character

strrchr 
finds the last occurrence of a character

strspn 
returns the length of the maximum initial segment that consists
of only the characters found in another byte string

strcspn 
returns the length of the maximum initial segment that consists
of only the characters not found in another byte string

strpbrk 
finds the first location of any character from a set of separators

strstr 
finds the first occurrence of a substring of characters

strtok 
finds the next token in a byte string
Character array manipulation

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
*/