//week06-4.cpp
//LeeCode 學習計劃 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(char c: moves){//開始在原點
            if(c=='U'){//C++進階回圈
                y++;
            }else if(c=='D'){//往下
                y--;
            }else if(c=='L'){//往左
                x--;
            }else if(c=='R'){//往右
                x++;
            }
        }
        if(x==0 && y==0)return true;
        else return false;
    }
};
