//week02-3.cpp �ϥ�C++2011�s�����r��stoi()�\��
//�bCodeBlocks�����}��Settings-Compiler...��C++����
//SOIT106_ADVANCE_001 Using C++
# include <iostream>// cin cout Ū�J�r�� �L�X�r��
# include <string>//string�r��\��
using namespace std;//�ϥΩR�W�Ŷ��зǪ���std
int main(){
    string a;//�ŧi�r��a
    cin>>a;//Ū�J�r��a
    string ans;//�ŧi�r��ans�񵪮ץΪ�
    int n=a.length();//�r��a������
    for(int i=n-1;i>=0;i--)ans+=a[i];//��L�Ӫ��j�� �A�^���̧�a[i]���ans���̭�
    cout << a << '+' << stoi(ans) << '='
         << stoi(a)+stoi(ans) << '\n';
//stoi() is "string to int"��r���ܦ����
}
