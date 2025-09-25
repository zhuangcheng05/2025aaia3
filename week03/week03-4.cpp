//week03-4.cpp
//LeeCode �D���D 120. Triangle
class Solution {//�ϥΰʺA�W���C�C��s
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //triangle[i][j]��i������j�ӼƦr
        int n = triangle.size();//�`�@���X�h
        //�q�U���W�d �̤U������n-1���N�O�̥������̤p��
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
            }
            //�C�ӤH�n�L�U��2�ӿ�ܧ�̤p������
        }
        return triangle[0][0];
    }
};
