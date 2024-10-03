#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream myFile("MyFile.txt"); //создает файл MyFile.txt в текущей директории
    if(myFile.is_open()) cout<<"File handler cucecessfully created"<<endl; //проверяет открыт ли файл
    
    myFile.put('_');//положить символ char в файл
    myFile << "Hello in file\n";
    myFile.write("hello", 5);// 6 запишет с null в конце
    myFile.seekp(1);//затирает H в начале
    myFile << "+";
    
    //чтение файла
    string line;
    ifstream in_data("MyFile.txt");
    if (in_data.is_open())
    {
        while (getline(in_data, line))
        {
            cout << line << endl;
        }
    }
    in_data.close();
    return 0;
}
