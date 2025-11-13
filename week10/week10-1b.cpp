//week10-1b.cpp
//1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=(high-low)/2;//用數學，奇數佔一半
        if(high%2==1 || low%2==1)ans++;//頭尾有奇數要＋＋
        return ans;
    }
};