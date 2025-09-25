///week03-1.cpp
///File-Save As 存檔時要把檔名寫齊
#include <iostream>///c++ cin cout
#include <vector>///c++的陣列
using namespace std;
int main(){
    vector<int> a(2);///有個陣列裡面有兩格
    for(int i=0;i<a.size();i++)cout<<a[i]<<' ';///印出陣列
    cout<<endl;///跳行

    a.push_back(99);///把99推到陣列a的更後面
    a.push_back(77);///把77推到陣列a的更後面

    for(int i=0;i<a.size();i++)cout<<a[i]<<' ';///印出陣列
    cout<<endl;///跳行
}
