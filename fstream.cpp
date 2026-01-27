#include <fstream>
#include <iostream>

int main(int argc, char const *argv[])
{
    /* 
ifstream – для чтения (input file stream);
ofstream – для записи (output file stream);
fstream – для чтения и записи.

//дополнительные флаги при открытии:
ios::in – открытие для чтения;
ios::out – открытие для записи;
ios::app – запись в конец файла;
ios::trunc – очистить файл при открытии (для ofstream используется по умолчанию);
ios::binary – открыть в бинарном режиме (для двоичных файлов).


ofstream fout("result.txt"); //открываем файл для записи
ifstream fin("data.txt"); //открываем файл для чтения
fstream fin_out("file.txt");//открываем для чтения и записи
ofstream fout("data.txt", ios::app); // дозапись в конец
fstream file("data.txt", ios::in | ios::out); // чтение + запись

методы:
seekg(...) — перемещает позицию чтения (g = get),
seekp(...) — перемещает позицию записи (p = put),
tellg() / tellp() — возвращают текущие позиции чтения/записи.
У ifstream имеет смысл только seekg/tellg, у ofstream — seekp/tellp. 
У fstream доступны обе пары и позиции независимы (т.е. эти указатели могут перемещаться отдельно) .

Оба  метода имеют две формы:
std::stream& seekg(std::streampos pos); // абсолютная позиция 
std::stream& seekg(std::streamoff off, std::ios::seekdir dir); // смещение + откуда 
std::stream& seekp(std::streampos pos); 
std::stream& seekp(std::streamoff off, std::ios::seekdir dir);
dir бывает:
std::ios::beg — от начала,
std::ios::cur — от текущей позиции,
std::ios::end — от конца. 
Важно!
1) Смещение измеряется в байтах.  В тектовом режиме смещение может вести себя не интуитивно 
(помним, что в конце строки в Windows два байта '\r', '\n', а не один). 
Символы в разных кодировках могут занимать разное количество байт.
2) В fstream после операций чтения перед записью (и наоборот) стандарт требует вставить операцию синхронизации: 
seekg()/seekp() (даже «на месте», например seekg(0, cur)), либо flush() перед чтением. Иначе поведение может быть непредсказуемым.
3)  Если поймали eof()/fail(), прежде чем делать seek…, вызовите clear():
file.clear(); 
file.seekg(0, ios::beg);


ifstream fin("data.txt"); //открываем файл для чтения
if (!fin.is_open()) {
	cout << "Не удалось открыть файл для чтения!\n";
	return 0;
}


//закрываем файл 
fout.close();
fin.close();
fin_out.close();


//запись в файл
ofstream fout("result.txt"); //открываем файл для записи
	if (!fout.is_open()) {
		cout << "Не удалось открыть файл для записи!\n";
		return 0;
	}
	fout << "Hello, world!\n";
	int k = 567;
	fout << k << endl;
	fout.close();
//в файле 
Hello, world!
567


//чтение из файла
ifstream fin("result.txt"); //открываем файл для чтения
	if (!fin.is_open()) {
		cout << "Не удалось открыть файл для чтения!\n";
		return 0;
	}
	string text;
	int k;
	getline(fin, text);
	fin >> k;
	cout << "Прочитано:\n" << text << endl << k << endl;
    fin.close();



//чтение до конца файла
ifstream fin("result.txt"); //открываем файл для чтения
	if (!fin.is_open()) {
		cout << "Не удалось открыть файл для чтения!\n";
		return 0;
	}
	string text;
	while (getline(fin, text)) { //пока есть данные для чтения fin -> true
		 cout << text << endl;
	}
	fin.close();


//чтение до конца файла используя >> При этом каждое слово из файла будет выводиться с новой строки, а пробелы игнорируются.
string text;
while (fin >> text) { 
	cout << text << endl;
}



fstream file("data.txt", ios::in | ios::out);
	if (!file.is_open()) {
		cout << "Не удалось открыть файл!\n";
		return 0;
	}
	int number;
	int index = 0;
	while (file >> number) {
		number /= 2;
		file.seekp(index * 3, ios::beg); //указатель записи  перед числом
		file << setw(3) << number;
		file.seekg((index + 1) * 3, ios::beg); //указатель чтения вернуть к следующему числу
		index++;
	}
	file.close();



Согласно правилам C++, перед записью после чтения до конца файла нужно сбросить флаги потока с помощью clear()
file.clear();               // сброс eof/fail



int remove(const char *fname) -  удаляет файл, указанный fname. Если файл был благополучно удален, она возвращает 0, 
а в случае ошибки —1. 
int rename(const char *oldfname, const char *newfname) - изменяет название файла со старого oldfname на новое newfname. 
Новое имя newfname не должно совпадать с именами, имеющимися в каталоге. 
Функция rename() возвращает 0 в случае успеха и ненулевую величину — в случае ошибки. 
    */
    return 0;
}
