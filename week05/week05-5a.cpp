//week05-5a.cpp
# include <iostream>
using namespace std;
int main(){
  int now;
  cin >> now;
  int m = now,M = now;
  for(int i=0;i<5;i++){
    cin >> now;
    if(now>M) M = now;
    if(now<m) m = now;
  }
  cout << M-m;
}
