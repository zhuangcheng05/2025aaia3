//week03-3a.cpp �G�X�@���Ĥ@�ؤ�k �⤣�O0�o��X��
//LeeCode �ǲ߭p�e�Ĥ��D 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;//�Ψө񤣬O0���Ʀr
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0)ans.push_back(nums[i]);
        }//�W���⤣�O0�����bans�̭��A��for�j���^�h
        //�A��for�j���^�h
        for(int i=0;i<nums.size();i++){
            if(i<ans.size())nums[i] = ans[i];
            else nums[i] = 0;
        }
    }
};
