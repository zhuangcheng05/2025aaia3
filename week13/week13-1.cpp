//week13-2.cpp
//moodle點擊 adventofcode.com網址可以看到黑底白字
//LeeCode 幫你把#include打好了不用在打了
#include <iostream>
using namespace std;
int main() {
    char c;
    int d;//轉動幾格
    int now =50;//一開始的密碼鎖指向50
    int ans = 0;
    while(cin>>c>>d){//一直讀資料
        //if (c=='L')cout<<"往右轉"<<d<<"格\n";
        //if (c=='R')cout<<"往左轉"<<d<<"格\n";
        if (c=='L')now=now-d;
        if (c=='R')now=now+d;
        now=(now%100+100)%100;
        //cout<<"現在的刻度是："<<now<<"\n";
        if(now==0)ans++;
    }
    cout<<"答案是："<<ans;
}
/*
L68
L30
R48
L5
R60
L55
L1
L99
R14
L82
*/