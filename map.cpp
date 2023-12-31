#include <iostream>
#include <map>
#include <string>
#include <typeinfo>
using namespace std;
/*
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
} */
template <typename T, typename U>
void outmap (std::map<U, T> m){
for (auto it1=m.begin(); it1!=m.end(); ++it1){
        cout <<"Key "<<it1->first<<" Value "<< it1->second<<endl;		
    }
	cout <<endl;
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
	map<std::string, int> cars;
	cars ["Шевроле"]=5;//другой способ заполнения map
	cars ["Нива"]=125;
	cout << "map cars" << endl;
	outmap (cars);
	//другой способ вывода map, тут не работает, в песочнице все норм
	//for (auto[key, value]:cars) cout <<key<<" = "<< value <<endl;
	
	
	//вывод значения map по ключу "Rome" (если индекса не существует, возвращает 0)
	cout <<"years[Rome]" <<years["Rome"]<<endl;
	//вывод значения map по ключу из стринга London
	string London ={"London"};
	cout <<"years[London]" <<years[London]<<endl;

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

	//добавляем элемент в map years
	years["Halo"] = 256;
	outmap (years);	

	//вывод элемента по индексу
	string str ={"Moscow"};
	cout << "years.at(str) " <<years.at(str) << endl;
	cout << "years.at(Moscow) " <<years.at("Moscow") << endl;
	
	//изменяем значение элемента map по индексу
	years["Halo"]=0;
	cout << "after years[Halo]=0 " <<years["Halo"] << endl;
	years["Halo"]++;//увеличиваем значение на +1
	cout << "after years[Halo]++ " <<years["Halo"] << endl;
	//копируем map years в map lightyears
	std::map<std::string, int> lightyears;
	lightyears = years;
	cout << "lightyears= " << endl;
	outmap (lightyears);

	//проверяем на наличие значения по ключу
	if (years.find("ten") != years.end()) cout << "Ключ 'ten' найден в 'years'" << endl;
    else cout << "Ключа 'ten' нет в 'years'" << endl;	
	//проверяем на наличие значения по ключу (другой способ) ()
	//возвращает 1 если такой ключ есть, иначе 0
	cout << "ten\t" << years.count("ten")<< endl;     // ten   1

	//перебор элементов map по циклу
	cout << "map in for " << endl;
	for (const auto& element : years)    
	cout << element.first << "\t" << element.second << endl;

	//перебор элементов map по циклу for each
	cout << "map in for each " << endl;
	for (auto i:years) {
		cout << "map in for each i.first " <<i.first << endl;
		cout << "map in for each i.second " <<i.second << endl;
		if (i.second==1147) cout << "1147 ears, it Moscow " <<i.second << endl;
	}
	//тест универсального  вывода значения в конволь 
	std::map<float, int> floatmap = {
        {1.256, 1147},
        {654.695, -753},
        {1354.34, 47},
		{46546.54, 135}
    };
	outmap (floatmap);

	//if(!mapkey[ii]) //проверка на отсутствие значения в мапе по индексу

	cout<<"Hello World";
    return 0;
}