//week03-3b.cpp �G�X�@���Ĥ@�ؤ�k �⤣�O0�o��X��
//LeeCode �ǲ߭p�e�Ĥ��D 283. Move Zeroes
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
