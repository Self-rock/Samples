#include <iostream>
#include <vector>
#include <algorithm> //����室�� ��� ���஢�� �����
using namespace std;

template <typename T>
void VecToCout(std::vector<T>& v){
for (auto i : v) {
        std::cout << i << " ";
        } 
    cout << endl;
}

int main(int argc, const char** argv) {
    vector <int> ivec={1,2,3,4,5,6,7,8,9};//ᮧ���� �����  楫�� �ᥫ
    vector <string> svec={"Vova","V","o","v","a"};//ᮧ���� ����� ��ப
    vector <int> fiveInt(5);//ᮧ���� ����� �� 5 int
    vector <string> fiveString;//ᮧ���� ���⮩ ����� ��ਭ�
    fiveString.reserve(5);//������� ��� �� 5 ����⮢
    vector <vector <int>> vecvec;//ᮧ���� ����� ����஢
    vecvec.resize(10);// 㢥��稢��� ࠧ��� ����� ����஢ �� 10
    vecvec =   {{1, 4, 7},
                {2, 5, 8},
                {3, 6, 9}};//������塞 ����� ����஢
    cout << "ivec= "<< ivec[0] << endl;
    cout << "svec= "<< svec[0] << endl;
    ivec.at(0)=8;//�����塞 ���祭�� ��ࢮ�� ����� 楫��᫥����� �����
    svec.at(0)="Mova";//�����塞 ���祭�� ��ࢮ�� ����� ��ப����� �����
    //�뢮��� �� �࠭ ᮤ�ন��� ����� ����⮢ ����஢ ���� ᯮᮡ���
    cout << "ivec[0]= "<< ivec[0] << endl;
    cout << "ivec.at(0)= "<< ivec.at(0) << endl;
    cout << "svec[0]= "<< svec[0] << endl;
    cout << "svec.at(0)= "<< svec.at(0) << endl;
    if (ivec == fiveInt) cout << "ivec and  fiveInt they equal!"<< endl;// �ࠢ���� �����
    else {cout << "ivec and  fiveInt they not equal"<< endl; }
    cout << "svec.size() = "<< svec.size() << endl;//�����뢠�� ࠧ��� ����� svec
    svec.push_back("Nova");
    cout << "svec.size() after svec.push_back(Nova) = "<< svec.size() << endl;//�����뢠�� ���� ࠧ��� ����� svec
    cout << "svec.at(5)= "<< svec.at(5) << endl;
    svec.pop_back();
    cout << "svec.size() after svec.pop_back() = "<< svec.size() << endl;//�����뢠�� ���� ࠧ��� ����� svec
    if (fiveInt.empty()) cout << "fiveInt empty"<< endl;// �஢��塞 �� ����� �� ����� �㫥��� ࠧ��� 
    cout << "fiveInt not empty"<< endl;
    cout << "svec.size() = "<< svec.size() << endl;
    svec.insert(svec.begin(), "Nova"); //��⠢�塞 ����� � ��砫� �����
    svec.insert(svec.end(), "Korova");//��⠢�塞 ����� � ����� �����
    cout << "svec.size() after two Insert() = "<< svec.size() << endl;
    cout << "svec.front() = "<< svec.front() << endl; //�뢮��� ���� ����� �१ svec.front()
    cout << "svec.back() = "<< svec.back() << endl;//�뢮��� ��᫥���� ����� �१ svec.back()
    svec.erase (svec.end());//㤠�塞 ��᫥���� ����� ����� svec
    cout << "svec.size() after svec.erase (svec.end()) = "<< svec.size() << endl;
    cout << "svec.back() = "<< svec.back() << endl;
    cout << "svec.size()  = "<< svec.size() << endl;
    cout <<"svec.capacity()= " <<svec.capacity()<< endl;//capacity - ����⨬���� ������樨 
    //��।���� ॠ��� ࠧ��� - � ���� ࠧ��� ���� ������樨, � �� �, ᪮�쪮 � ��� �࠭���� ����⮢
    cout << "ivec= "<< ivec[0] << endl;
    //�뢮��� ����� 
    cout << "ivec ��������� = " << endl; 
    VecToCout(ivec);
    // ����㥬 ����� (��� ���஢�� �㦥� #include <algorithm>)
    sort(ivec.begin(), ivec.end());
    //���஢�� � ���⭮� ���浪� (�஢�७� �� �����)
    //sort(ivec.rbegin(), ivec.rend());
    //is_sorted(begin(ivec), end(ivec));//�᫨ ivec �����஢�� �� �����⠭��, ��୥� true
    //is_sorted(array.begin(), array.end());
    //is_sorted(std::rbegin(ivec), std::rend(ivec))//�᫨ ivec �����஢�� �� �뢠���, ��୥� true
    //is_sorted(array.rbegin(),array.rend())
    //reverse(ivec.begin(), ivec.end());//ࠧ���稢��� ���ᨢ ������� (�� �஢�७�)
    //�뢮��� ᮤ�ন��� ����� ��᫥ ���஢��
    cout << "ivec ��᫥ ���஢�� = " << endl; 
    VecToCout(ivec);
    vector<int> v={1,2,3,4,5,6,7,8,9,9,9};//��� ᫥� ��ப� �㦥� #include <algorithm>
    for_each(v.begin(), v.end(), [](int& a){a = a*a;});//㬭����� ����� ����� �� ᠬ��� ᥡ�
    cout << "vector v after for_each(v.begin(), v.end(), [](int& a){a = a*a;})= "; 
    VecToCout(v);    
    cout << "�뢮� ����� �१ for_each(v.begin(), v.end(), [](int a){cout << a << ' ';}) " << endl;
    for_each(v.begin(), v.end(), [](int a){cout << a << ' ';});//�뢮� ����� �१ for_each
    vector <int> tmp;
    cout << endl;
    unique_copy (v.begin(), v.end(), std :: back_inserter(tmp));//���� 㭨������ ����⮢ 
    //� ��⠢�� �� � ����� ����� ��� ᯨ᪠    
    cout << "����� tmp ��᫥  unique_copy (v.begin(), v.end(), std :: back_inserter(tmp)); " << endl;
    VecToCout(tmp);
    tmp.assign(18,9);
    cout << "����� tmp ��᫥  tmp.assign(18,9) " << endl;
    VecToCout(tmp);
    tmp.clear();
    cout << "����� tmp ��᫥  tmp.clear() " << endl;
    VecToCout(tmp);
    cout << "tmp.size() ��᫥ tmp.clear() = "<< tmp.size() << endl;
    //���஢�� ����஢ ��ਭ��� �� ࠧ���� ��ਭ��� (�� �஢�७�)
    //std::sort(array.begin(), array.end(), [](std::string const& s1, std::string const& s2) { return s1.size() < s2.size(); });
    //㤠����� ��㭨������? �� �஢�७�
    //values.erase(std::unique(values.begin(),values.end()), values.end());
    int a;
        cin>>a;
    return 0;
}