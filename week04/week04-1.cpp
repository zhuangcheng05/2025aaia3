//week04-1.cpp
//LeeCode 挑戰題 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles; //一開始就喝了那抹多瓶
        while(numBottles >= numExchange) {//如果瓶子數>=兌換量就兌換
            numBottles = numBottles - numExchange + 1;//兌換一瓶飲料
            ans ++;//多喝了一瓶
            numExchange ++;//兌換的標準多一瓶
        }
        return ans;
    }
};