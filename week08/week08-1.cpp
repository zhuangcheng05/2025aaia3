//week08-1.cpp LwwCode 學習計劃 矩陣第一題
//1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;//回權前面now=0
        for(int i=0;i<accounts.size();i++){//左手i
            int now=0;
            for(int j=0;j<accounts[0].size();j++){//右手j
                now += accounts[i][j];//把錢加起來
            }//回圈裡面更新now,後面把now拿來用
            ans = max(ans,now);//最有錢的人更新答案
        }
        return ans;
    }
};