//week01-1.cpp Part 2
//SOIT106_ADVANCE_001 Using C
# include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int b=n;
    int ans=0;
    while(n>0){
        ans=ans*10+n%10;
        n=n/10;
    }
    printf("%d+%d=%d\n",b,ans,b+ans);
}
