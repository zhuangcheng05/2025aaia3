//week15-1.cpp
//242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())return false;
        int H[256] = {};
        for(char c : s){
           H[c]++;
        }
        for(char c : t){
            H[c]--;
            if(H[c]<0)return false;
        }
        return true;
    }
};
