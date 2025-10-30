//week08-4.cpp
//數字黑洞 卡不列克常數 6174
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    cout<<"輸入任意四位數";
    int n;
    cin>>n;
    for(int i=0;i<7;i++){//最多七次會到達6174
        vector<int> a;//存放每一位數
        while (n>0)//把每一位數拆開
        {
            a.push_back(n%10);//取出個位數
            n/=10;//播完皮就瘦了
        }
        sort(a.begin(),a.end());
        int M=a[3]*1000+a[2]*100+a[1]*10+a[0];
        int m=a[0]*1000+a[1]*100+a[2]*10+a[3];
        n=M-m;
        cout<<M<<" - "<<m<<" = "<<m<<"得到了"<<n<<endl;
    }
}