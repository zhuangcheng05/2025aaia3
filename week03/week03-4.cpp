//week03-4.cpp
//LeeCode 挑戰題 120. Triangle
class Solution {//使用動態規劃慢慢更新
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //triangle[i][j]第i曾的第j個數字
        int n = triangle.size();//總共有幾層
        //從下往上查 最下面的第n-1曾就是最本身的最小值
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
            }
            //每個人要他下面2個選擇找最小的那個
        }
        return triangle[0][0];
    }
};
