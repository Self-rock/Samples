#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    //����� �� ���⥪�⭮�� ���� �� ࠡ�⠥�, ⮫쪮 ��������� �� ���᮫�
    std::cout<<"�� ᪮�쪮 �����? \n";
    int timer;
    std::cin>>timer;
    std::this_thread::sleep_for(std::chrono::seconds(timer));
    std::cout<<"� ������\n";

    return 0;
}