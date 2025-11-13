//week10-2.cpp
//1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        double total =0;//把所有薪水加起來
        int N = salary.size();//總共有Ｎ個人
        int M =salary[0],m =salary[0];//把第0個人先當最大值最小值
        for(int i=0;i<N;i++){
            total += salary[i];
            if(salary[i]>M)M=salary[i];
            if(salary[i]<m)m=salary[i];

        }
        return (total-M-m) /(N-2);//去掉兩個人在除
    }
};