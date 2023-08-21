#include <iostream>
#include <map>
#include <string>
using namespace std;
//вывод map в консоль
	void outmap (map<std::string, int> m){
	std::map<std::string, int>::iterator it = m.begin();
	while (it != m.end())
  {
    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    ++it;
  }
}
int main()
{
    //map - словарь создание с заполнением - ключ стринг, значение int
	//map автоматически сортируется по возрастанию по ключу
	std::map<std::string, int> years = {
        {"Moscow", 1147},
        {"Rome", -753},
        {"London", 47},
		{"Моршанск", 135}
    };
	//вывод map типа стринг инт в консоль
	outmap (years);
	
	//удаление элемента Rome
	years.erase("Rome"); 
	outmap (years);
	
	cout<<"Hello World";
    return 0;
}