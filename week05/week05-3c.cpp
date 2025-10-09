//  week05-3b.cpp Part1:Input,Part2:Output
//  Part3:stringstream Part4:reverse
//  Part5:火車頭＋車廂＋車廂＋車廂
//  CPE 第二題 UVA 483 倒過來
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
    string line;//Parta:Intput
    while (getline(cin, line) ){//讀進來
        stringstream ss(line);//Part3:stringstream 斷字
        string word;//字放這裡
        ss >> word;
        reverse(word.begin(),word.end());
        cout << word;
        while (ss >> word) {//Part3
            reverse(word.begin(),word.end());//Part4
            cout << " " << word;//Part3
        }
        cout << endl;//Part2:Output
    }
}

