#include <cstdlib>
#include <cstring>
#include <string>

int main(int argc, char const *argv[])
{
    char* a = std::getenv("PATH");
    puts(a);
    return 0;
}

