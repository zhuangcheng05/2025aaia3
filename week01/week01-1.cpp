//LeeCode 28. Find the Index of the First Occurrence in a String
//�bhaystack �b���_���� ���needle�w(�j�����w)
//haystack:sadbutsad
//needle: sad
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length();//�r�����
        for(int i=0;i<=H;i++){//9��3�o��6
        // .substr(�}�l,����)�����r��
            if(haystack.substr(i,N) ==needle)return i;
        }
        return -1;//�j��̧䤣��needle����
    }
};
