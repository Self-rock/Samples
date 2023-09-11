#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string S, in, app, ins; 
    ins = {"-*-"};
    S = string(10, 'z');//���樠������ ����� ��ਭ� 10 ᨬ������ z
    cout<<S<<endl;
    cin >> in; //���樠������ ����� ��ਭ� �� ���짮��⥫�᪮�� �����
    cout<<in<<endl;
    app = S+in; //������塞 in � ����� S
    cout<<app<<endl;
    cout<<"Size app="<<app.size()<<endl; // ��।��塞 ࠧ��� app
    app.resize(50); // �����塞 ࠧ��� app
    cout<<"New size app="<<app.size()<<endl;
    in.clear(); // ��頥� in, ��ப� �⠭������ ���⮩
    // �᫨ ��ப� in ����, �뢮��� �� ࠧ���
    if (in.empty()) cout<<"String in is empty, end equal "<<in.size()<<endl;
    cout<<"app befor app.push_back('v') "<<app<<endl;
    app.push_back('v'); // ������塞 ᨬ��� v � ����� ��ப� app
    cout<<"app after app.push_back('v') "<<app<<endl;
    cout<<"New size app="<<app.size()<<endl;
    app.append(S); // ��ᮥ���塞 ��ப� S � ����� ��ப� app
    cout<<"app after app.append(S) "<<app<<endl;
    app.append(S, 4, 5); //������塞 � ����� ��ப� app 5 ᨬ������ ��ப� S, ��稭�� � ����樨 4 (��ப� S) 
    cout<<"app after app.append(S, 4, 5) "<<app<<endl;
    app.erase(24, 25); // 㤠�塞 �� app 25 ᨬ����� ��稭�� � 24 ����樨
    cout<<"app after app.erase(24, 25) "<<app<<endl;
    app.erase(15); // 㤠�塞 �� app ��稭�� � 15 ����樨 � �� ���� ��ப�
    cout<<"app after app.erase(15) "<<app<<endl;
    cout<<"New size app="<<app.size()<<endl;
    cout<<"10 item app (first elem 0) ="<<app.at(10)<<endl;//�����뢠�� 10 ����� (�㬥��� � 0)
    app.at(10)='s';
    cout<<"10 item app after app.at(10)='s' = "<<app.at(10)<<endl; // �����塞 ���祭�� 10 ����� app �� s
    cout<<"return first item app = "<<app.front()<<endl; //�뢮��� ���祭�� ��ࢮ�� �����
    app.push_back('y'); // ������塞 ��᫥���� ����� 'y'
    cout<<"return last item app after app.push_back('y') = "<<app.back()<<endl; //�뢮��� ���祭�� ��᫥����� �����
    cout<<"app now "<<app<<endl;
    app.pop_back(); //㤠�塞 ��᫥���� ᨬ���
    cout<<"app after app.pop_back() "<<app<<endl;
    app.insert(2,1,'k'); //��⠢�塞 � ��ப� app, �� 2 ������ (��⠥� � 0), ���� ᨬ��� 'k'
    cout<<"app after app.insert(2,1,'k') "<<app<<endl;
    app.insert(4, ins);//��⠢�塞 � ��ப� app, � 4 ������ (��⠥� � 0), ��ப� ins
    cout<<"app after app.insert(4, ins) "<<app<<endl;
    app.insert(8, ins, 1, 2);//��⠢�塞 � ��ப� app, � 8 ������ (��⠥� � 0), �� ��ப� ins, 2 ᨬ����, ��稭�� � ����樨 1 (��⠥� � 0)
    cout<<"app after app.insert(8, ins, 1, 2) "<<app<<endl;
    cout<<"app.substr(3) "<<app.substr(3)<<endl; //�뢮��� ᮤ�ন��� ��ப� app � 3 �����(��⠥� � 0), �� ���� ��ப�
    cout<<"app.substr(3,5) "<<app.substr(3,5)<<endl;//�뢮��� 5 ����⮢ ��ப� app ��稭�� � 3 �����(��⠥� � 0)
    app.replace(11, 3, ins, 0, 3); //�����塞 3 ᨬ���� � ��ப� app, ��稭��  � 11 ᨬ����, �� 3 ᨬ���� �� ��ப� ins, ��稭�� � 0 ᨬ����
    cout<<"app.replace(11, 3, ins, 0, 3) "<<app<<endl;
    cout<<"app.size()="<<app.size()<<endl;
    app.replace (0, 21, 21, 's');// �����塞 21 ᨬ���� ��ப� app, ��稭�� � 0, �� 21 ᨬ��� 's' 
    cout<<"app = "<<app<<endl;
    app.replace (2, 3, ins, 0, 3);//// �����塞 3 ᨬ���� ��ப� app, ��稭�� � 2, �� 3 ᨬ���� ��ப� ins, ��稭�� � 0 �����
    cout<<"app = "<<app<<endl;
    cout<<"ins into app placed at "<<app.find(ins, 0)<<" item"<<endl;// �饬 �宦����� ��ப� ins  � ��ப� app ᫥�� ���ࠢ�, 
    //�����뢠�� ����� ����� ��� � ��ப� app ��室���� ��ப� ins 
    cout<<"app = "<<app<<endl;
    cout<<"ins = "<<ins<<endl;
    cout<<"swaped app and ins"<<endl;
    app.swap(ins); // ���塞 ���⠬� ᮤ�ন��� app � ins
    cout<<"app = "<<app<<endl;
    cout<<"ins = "<<ins<<endl;
    app.swap(ins);
    app.at(5)='S';
    cout << "��室�� app " <<app << endl;
    /*transform()  �ॡ�� ������ #include <algorithm>, app.begin() ��砫� ��㤠 ��६,
    app.end() �����, ��㤠 ��६,  �� ���� app.begin() ��砫� �㤠 ������ � �� ��
    �ॢ�頥�, tolower � ������ ॣ����, toupper � ���孨� ॣ���� */
    transform(app.begin(),app.end(),app.begin(),::tolower);
    cout << "app ��᫥ transform(app.begin(),app.end(),app.begin(),::tolower) " <<app << endl;
    transform(app.begin(),app.end(),app.begin(),::toupper);
    cout << "app ��᫥ transform(app.begin(),app.end(),app.begin(),::toupper) " <<app << endl;
    string unsort = {"gKaD5b5#&mvH6c4"};
    cout << "��室�� unsort " <<unsort << endl;
    sort(unsort.begin(), unsort.end());// ���஢�� ���ᨢ� string (�� ���᪨� �㪢�� ��᭥�)
    cout << "unsort ��᫥ ���஢�� " <<unsort << endl; 
    //�஢��塞 �����஢�� �� ���ᨢ ���� ��� ���⮪
    if (is_sorted(unsort.begin(), unsort.end())) cout <<"unsort to sorted"<<endl;
    cout << "stoi(125) " <<stoi("125") << endl;// ��ப� � 楫�� �᫮
    cout << "to_string(85364) " <<to_string(85364) << endl; // 楫�� �᫮ � ��ப�
    std::size_t found = app.find("-*-");//�饬 ��ப� -*- � ��࠭塞 �� ������ � found 
    cout << "-*- in app find at " <<found << endl;
	cout << "app " <<app << endl;
    if (isupper(app[0])) app[0] = tolower(app[0]); // �᫨ �㫥��� ����� app � ���孥� ॣ����, ������ ��� � ������ ॣ����
    cout << "app after if (isupper(app[0])) app[0] = tolower(app[0])" <<app << endl;
	if (islower(app[0])) app[0] = toupper(app[0]); // �᫨ �㫥��� ����� app � ������ ॣ����, ������ ��� � ���孨� ॣ����
    cout << "app after if (islower(app[0])) app[0] = toupper(app[0])" <<app << endl;
	//��⠥� ������⢮ ᨬ����� � ���ᨢ� app ⨯� string
	cout <<"count S in string app " <<count(app.begin(),app.end(),'S')<< endl;
    int first = 891, second = 65456;// ᬥ蠭� ���祭�� � ᨬ���� � ��ப�
    string heshmesh = std::to_string(first) + '/' + std::to_string(second);
    cout << "heshmesh = " <<heshmesh << endl;//����� ��᫨ �믮������ �᫮��� (return 'S'==c)
	cout << "in app have S " << std::count_if(app.begin(),app.end(),[](char c){ return 'S'==c;})<< endl;
    cout << "app= " <<app << endl;
    remove(app.begin(), app.end(), '-');// app.end(); //㤠����� - �� ���ᨢ� app
    cout << "app after remove(app.begin(), app.end(), '-'), app.end() = " <<app << endl;
    reverse(app.begin(), app.end()); // ࠧ���稢��� ��᫥� ᨬ����� � ���ᨢ� �� ��⨢���������
    cout << "app after reverse(app.begin(), app.end()) = " <<app << endl;
    
    
    cin >>in;
    return 0;
}
