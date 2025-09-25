//week03-3a.cpp 二合一的第一種方法 把不是0得找出來
//LeeCode 學習計畫第六題 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;//用來放不是0的數字
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0)ans.push_back(nums[i]);
        }//上面把不是0的樹放在ans裡面再用for迴圈塞回去
        //再用for迴圈放回去
        for(int i=0;i<nums.size();i++){
            if(i<ans.size())nums[i] = ans[i];
            else nums[i] = 0;
        }
    }
};
