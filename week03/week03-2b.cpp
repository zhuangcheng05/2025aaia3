//week03-2b.cpp�G�X�@ ���n�u����
//LeeCode �ǲ߭p�e�ĤK�D1822. Sign of the Product of an Array
//��}�C���_�� �ݬO�����٬O�t���٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;//�]��0��������٬O0�A��1���ƻ��ܬƻ�
        for(int i=0;i<nums.size();i++){//�ݦ��X�Ӽưj��N�X��
            if(nums[i]>0)ans*= +1;
            if(nums[i]<0)ans*= -1;
            if(nums[i]==0)ans*= 0;
            //�C����numsp[i]���ians��
        }//�Ʀr���V�j1000�ӼƦr����@�b�N�z���F
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
