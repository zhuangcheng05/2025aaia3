//week01-3.cpp
#include <iostream>//�ϥ�c++���~�� �t�d��Jinput ��Xoutput
using namespace std;//�ϥ�c++��std���R�W�Ŷ�
int main(){
	int n;
	cin>>n;//�ϥ�c++ console input ��J��r���
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=i*i;
	}
	cout<<ans;//�ϥ�c++ console output
}
