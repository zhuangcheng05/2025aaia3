//week02-3.cpp 使用C++2011新版的字串stoi()功能
//在CodeBlocks必須開啟Settings-Compiler...把C++打勾
//SOIT106_ADVANCE_001 Using C++
# include <iostream>// cin cout 讀入字串 印出字串
# include <string>//string字串功能
using namespace std;//使用命名空間標準的的std
int main(){
    string a;//宣告字串a
    cin>>a;//讀入字串a
    string ans;//宣告字串ans放答案用的
    int n=a.length();//字串a的長度
    for(int i=n-1;i>=0;i--)ans+=a[i];//到過來的迴圈 再回全裡把a[i]塞到ans的裡面
    cout << a << '+' << stoi(ans) << '='
         << stoi(a)+stoi(ans) << '\n';
//stoi() is "string to int"把字串變成整數
}
