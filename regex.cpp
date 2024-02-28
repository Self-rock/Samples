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

    regex my_regex("[123...]*");// класс регекс, создаем в нем регулярное выражение
    string parsed_str {"123"};//строка для сравнения
    if (regex_match(parsed_str, my_regex)) cout<<"matched"<<endl; //совпадение если регекс сработал
    else cout<<"not matched"<<endl;//не совпадение если регекс не сработал
    return 0;
}

/*
abc… 	Letters
	123… 	  Digits
	\d 	    Any Digit
	\D 	    Any Non-digit character
	. 	    Any Character
	\. 	    Period
	[abc] 	Only a, b, or c
	[^abc] 	Not a, b, nor c
	[a-z] 	Characters a to z
	[0-9] 	Numbers 0 to 9
	\w 	    Any Alphanumeric character
	\W 	    Any Non-alphanumeric character
	{m} 	  m Repetitions
	{m,n} 	m to n Repetitions
	* 	    Zero or more repetitions
	+ 	    One or more repetitions
	? 	    Optional character
	\s 	    Any Whitespace
	\S 	    Any Non-whitespace character
	^…$ 	  Starts and ends
	(…) 	  Capture Group
	(a(bc)) Capture Sub-group
	(.*) 	  Capture all
	(abc|def) 	Matches abc or def
*/