//week12-3.cpp
//43. Multiply Strings
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")return"0";
        int n1 = num1.length(),n2=num2.length();
        vector<int> ans(n1+n2);
        for(int i=n1-1;i>=0;i--){
            for(int j=n2-1;j>=0;j--){
                ans[i+j+1] += (num1[i]-'0')*(num2[j]-'0');
                if(ans[i+j+1]>9)ans[i+j]+=ans[i+j+1]/10;//¶i¦ì
                ans[i+j+1]=ans[i+j+1]%10;//¾l¼Æ
            }
        }
        string strAns;
        if(ans[0]==0){
            for(int i=1;i<n1+n2;i++){
                strAns +=(char)(ans[i]+'0');
            }
        } else{
            for(int i=0;i<n1+n2;i++){
                strAns +=(char)(ans[i]+'0');
            }
        }
        return strAns;
    }
};
