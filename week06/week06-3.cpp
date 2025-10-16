//week06-3.cpp
//LeeCode 學習計劃 Simulation 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>a;
        for(string op : operations){//Ｃ＋＋進階迴圈
            //cout<<op<<"\n";//先試試看會印出什麼東西
            if(op[0]=='+'){//把末兩數字相加再塞回去
                int temp = a.back();//先記下最後一向
                a.pop_back();//暫時吐掉他
                int temp2 = a.back();//在記下最後第二項
                a.push_back(temp);//把剛剛最後一項塞回去
                a.push_back(temp+temp2);//兩數相加在塞回去
            }
            else if(op[0]=='D'){//複製最後一位再塞回去
                a.push_back(a.back()*2);
            }
            else if(op[0]=='C'){//吐掉最後一位
                a.pop_back();
            }
            else{//把stoi(op)整數塞回去
                a.push_back(stoi(op));
            }

        }
        int ans=0;
        for(int now:a){//進階迴圈，也可用for(int i=0;i<a.size();i++){int now=a}
            ans+=now;
        }
        return ans;//先隨便return一下等等再改
    }
};
