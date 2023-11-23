#include <iostream>
#include <regex>
#include <vector>
#include <string>

using namespace std;

int countSmileys(std::vector<std::string> arr)
{
  int count = 0;
  std::regex smiles_regex("[:|;](-|~)?[)|D]");  // : или ;   - или ~ опционально ?опция    ) или D
  for (auto &smile : arr) {
    if (std::regex_match(smile, smiles_regex))
      count++;//считаем совпадения
  }
  return count;
}

int main()
{
    vector<string> vstr {";-D", ":)", ":oD", ";o)"};
    int a= countSmileys(vstr);    
    cout<<"a= "<<a<<endl;
    return 0;
}