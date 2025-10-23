//week07-2.cpp
//畫出超大的正方形數字包起來
//TAICA交大基礎程式設計期中考第六題
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;//Part:intput
    cin>>n;
    for (int i=1; i<n*2; i++) {
        for (int j=1; j<n*2; j++) {
            int d=max(abs(i-n), abs(j-n));
            cout<<d;
        }
        cout<<"現在i是:"<< i << endl;
    }//Part:output
}//2會有3層樓，三會有五層樓，四會有七層樓...
