//week01-3c.cpp
#include <stdio.h>//�ϥ�c�y�����~�� �t�dinput output
int main(){
	int n,sum = 0;
	scanf("%d",&n);//�ϥ�c�y��scan with fornat �J
	for (int i=1;i<=n;i++){
		sum+= i*i;
	}
	printf("%d",sum);//�ϥ�C�y����print with fornat �L�X��
	return 0;
}
