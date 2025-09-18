//week01-3c.cpp
#include <stdio.h>//使用c語言的外掛 負責input output
int main(){
	int n,sum = 0;
	scanf("%d",&n);//使用c語言scan with fornat 入
	for (int i=1;i<=n;i++){
		sum+= i*i;
	}
	printf("%d",sum);//使用C語言的print with fornat 印出來
	return 0;
}
