//LeeCode 28. Find the Index of the First Occurrence in a String
//在haystack 在乾稻草堆裡 找到needle針(大海撈針)
//haystack:sadbutsad
//needle: sad
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length();//字串長度
        for(int i=0;i<=H;i++){//9減3得到6
        // .substr(開始,長度)部分字串
            if(haystack.substr(i,N) ==needle)return i;
        }
        return -1;//迴圈裡找不到needle失敗
    }
};
