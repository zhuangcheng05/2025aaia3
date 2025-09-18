//week02-2a.cpp Part 2
//SOIT106_ADVANCE_001 Using C++
#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	cin>>a;
	string ans;
	int n=a.length();
	for(int i=n-1;i>=0;i--)ans+=a[i];
	cout << a << '+' << stoi(ans) << '='
		 << stoi(a)+stoi(ans) << '\n';

}
