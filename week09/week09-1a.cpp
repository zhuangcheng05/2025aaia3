//week09-1a.cpp
//SOIT106_ADVANCE_004：進階題：大小寫轉換
# include <iostream>
# include <cctype>
using namespace std;
int main(){
    char c;
    while(cin>>c){
        if(isupper(c)) c=tolower(c);
        else if(islower(c))c=toupper(c);
        cout<<c;
    }
    cout<<"\n";
}