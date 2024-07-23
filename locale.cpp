#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    u32string str{U"kdsпajfkads fkasdj ksпппadj fkпsdaj f q"};
    auto pred = [](char32_t a){
        return a==L'п'?1:0;
    };
    
    std::cout<<"simbols = "<<count_if(str.begin(), str.end(), pred);

    return 0;
}