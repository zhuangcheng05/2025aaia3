//week11-3.cpp
//LeeCode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5=0,d10=0,d20=0;
        for(int bill : bills){
            if(bill==5)d5++;//順利拿到五元鈔票
            if(bill==10){//客人給妳十元你要還五元給他
                if(d5<1)return false;
                d10++;//拿到十元鈔
                d5--;//找出五元鈔
            }
            if(bill==20){//客人給你20原擬要找10元
                if(d10>0 && d5>0){
                    d20++;
                    d10--;
                    d5--;
                }
                else if(d5>=3){
                    d20++;
                    d5-=3;
                }
                else return false;
            }
        }
        return true;//成功賣光
    }
};
