#include <iostream>
#include <map>
#include <string>
using namespace std;

//вывод map в консоль
	void outmap (map<std::string, int> m){
	//создает итератор it указывающий на начало map m
	std::map<std::string, int>::iterator it = m.begin();
	//цикл, пока итератор it не будет указывать на конец map m
		while (it != m.end())  {
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

	//стирает все элементы map years
	//years.clear();

	//проверка, не является ли map пустым
	if (years.empty()) cout <<"map years пуста" << endl;
	else cout <<"map years не пуста" << endl;
	
	//вывод размера map years
	cout << "map size = " <<years.size() << endl;

	//удаление элемента Rome (удаление по ключу (или итератору?))
	years.erase("Rome"); 
	outmap (years);
	cout << "map size = " <<years.size() << endl;

	//добавляем элемент в map years
	years.insert(pair<string, int>("Kenigsberg", 40));
	outmap (years);

	//добавляем элемент в map years
	years.emplace("ten", 10);
	outmap (years);

	//вывод элемента по индексу
	string str ={"Moscow"};
	cout << "years.at(str) " <<years.at(str) << endl;
	cout << "years.at(Moscow) " <<years.at("Moscow") << endl;
	


	cout<<"Hello World";
    return 0;
}