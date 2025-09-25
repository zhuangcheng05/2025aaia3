//week03-3b.cpp 二合一的第一種方法 把不是0得找出來
//LeeCode 學習計畫第六題 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] !=0)nums[k++]=nums[i];
        }
         for(int i = k;i<nums.size();i++){
            nums[i] = 0;
        }

    }
};
