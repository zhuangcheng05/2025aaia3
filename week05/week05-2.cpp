//week05-2.cpp
//熟悉stringstream
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    cout<<"請輸入一段英文可以有空格:";
    string s;//字串
    getline(cin, s);//一次讀入一整行放入s
    cout<<"讀到了s字串："<< s << endl;
    stringstream ss(s);//教字串s變成ss
    string word;//字串word
    while (ss >> word) {
        cout << "有一個字：" << word << endl;
    }
    
}
