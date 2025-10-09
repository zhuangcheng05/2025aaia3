//week05-4.cpp
//LeeCode 學習計劃 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){//每一個字母都變成小寫
            s[i] = tolower(s[i]);//變小寫
        }
        return s;
    }
};
