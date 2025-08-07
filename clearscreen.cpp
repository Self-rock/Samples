#include <iostream>
#include <cstdlib>
//#define WINDOWS
void clear_screen()
{
#ifdef WINDOWS
    std::system("cls");
#else
    // Assume POSIX
    std::system ("clear");
#endif
}
int main(int argc, char const *argv[])
{
    std::cout<<"Hello";
clear_screen();
    return 0;
}
