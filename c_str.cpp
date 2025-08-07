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
