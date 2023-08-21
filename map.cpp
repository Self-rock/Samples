#include <iostream>
#include <map>
#include <string>
using namespace std;

//вывод map в консоль
	void outmap (map<std::string, int> m){
	//создает итератор it указывающий на начало map m
	std::map<std::string, int>::iterator it = m.begin();
	//цикл, пока итератор it не будет указывать на конец map m
	while (it != m.end())
  {
    //it->first указывает на ключ, it->second на связаное с ним значение
	cout << "Key: " << it->first << ", Value: " << it->second << endl;
    ++it;
  }
  std::cout <<endl;
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
	
	//удаление элемента Rome (удаление по ключу)
	years.erase("Rome"); 
	outmap (years);

	//вывод размера map years
	cout << "map size = " <<years.size() << endl;
	
	
	cout<<"Hello World";
    return 0;
}