#include <iostream>
#include <filesystem>
using namespace std;

int main(int argc, const char** argv) {

    //создаем и проверяем существует ли директория    
    if(!filesystem::exists("./dir")){
        filesystem::create_directory("./dir");
        cout<<"Директория создана"<<endl;
    }
    
    //Перебираем содержимое директории
    for(const auto& entry : filesystem::directory_iterator("./")){
        cout<<"Найдено"<<entry.path()<<" "<<endl;
    }

    //копируем файл или директорию
    filesystem::copy("./dir", "./dir2");
    cout<<"Директория скопирована"<<endl;

    //удаляем файл или директорию
    filesystem::remove("./dir");
    cout<<"Директория dir удалена"<<endl;
    filesystem::remove("./dir2");
    cout<<"Директория dir2 удалена"<<endl;

    //возвращаем размер файла
    cout<<"Размер файла  filesistem.cpp = "<<filesystem::file_size("./filesistem.cpp")<<endl;

    //переименовываем файл
    filesystem::rename("./filesistem.cpp", "./filesistem2.cpp");
    cout<<"файл переименован"<<endl;

    //переименовываем обратно
    filesystem::rename("./filesistem2.cpp", "./filesistem.cpp");
    cout<<"файл переименован обратно"<<endl;
    return 0;
}