//week02-5.cpp LeetCode �ǲ߭p�e�ĤG�D
//389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        //�����έp�@�U26�Ӧr���X�{�X��
        int A[256]= {};//�}�C�ŧi�}�C�Τj�A�����w�]�Ȭ�0
        for(int i=0;i<s.length();i++){
            char c = s[i];//����i�Ӧr��
            A[c]++;//������i�������r�����
        }
        for(int i=0;i<t.length();i++){
            char c = t[i];//����i�Ӧr��
            A[c]--;//�q��l�̮��X�r��
            if(A[c]<0)return c;//�r�������δN�O�L!
        }
        return 0;
    }
};
