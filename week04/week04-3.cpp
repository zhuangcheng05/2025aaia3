//week04-3.cpp
//LeeCode 學習計劃第七題 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();//上週交過 陣列大小
        for(int i=n-1;i>=0;i--){//倒過來的迴圈
            if(digits[i]==9)digits[i]=0;//要進位不能結束
            else{//不用進位
                digits[i]++;//簡單加一
                return digits;//把全部陣列當答案return
            }
        }
        digits.insert(digits.begin(),1);//最左邊插入1
        return digits;//結束ㄌ
    }
};
