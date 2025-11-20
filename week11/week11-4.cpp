//week11-4.cpp
//LeeCode 67. Add Binary
class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1,j=b.length()-1;//最右邊的位數
        vector<int> ans;//伸縮自如的陣列裡面要放答案
        int carry=0;
        while(i>=0 || j>=0){
            int now =carry;
            if(i>=0){
                now += a[i]-'0';//字母a[i]檢調'0'變數直
                i--;//到過來的迴圈
            }
            if(j>=0){
                now += b[j]-'0';
                j--;
            }
            ans.push_back(now%2);
            carry=now/2;//看看有沒有進位
        }
        if(carry>0)ans.push_back(carry);//結束時還有進位
        string strAns;
        for(int i=ans.size()-1;i>=0;i--){
            strAns =strAns+(char)(ans[i]+'0');
        }
        return strAns;
    }
};
