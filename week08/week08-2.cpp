//week08-2.cpp LeeCode 學習計劃第四題
//73. Set Matrix Zeroes 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //第一階段先讀完記下全部的零對應的i j 
        int M=matrix.size(),N=matrix[0].size();//左手M,右手N
        vector<int> markI(M,0),markJ(N,0);//宣告c++得陣列，長度分別是M N，裡面全部設1
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){//要記下對應的i ｊ
                if(matrix[i][j]==0){//要計下對應的i j
                    markI[i]=1;
                    markJ[j]=1;
                }
            }
        }
        //第二階段再標記把整條都清為0
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==1 || markJ[j]==1) matrix[i][j]=0;
            }
        }
    }
};