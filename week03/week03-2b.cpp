//week03-2b.cpp ぃ璶痷
//LeeCode 厩策璸礶材肈1822. Sign of the Product of an Array
//р皚癬ㄓ 琌タ计临琌璽计临琌0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;//0ヴ计临琌01或跑或
        for(int i=0;i<nums.size();i++){//Τ碭计癹伴碞碭Ω
            if(nums[i]>0)ans*= +1;
            if(nums[i]<0)ans*= -1;
            if(nums[i]==0)ans*= 0;
            //–Ωрnumsp[i]秈ans柑
        }//计禫1000计碞脄
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
