//week07-4.cpp
//1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions =instructions+instructions+instructions+instructions;//走四次
        cout<<instructions;
        int x=0,y=0;//d:方向，x座標,y座標
        int d=0;//0：北,1：東,2：南,3：西
        int dx[4]={0,1,0,-1};
        int dy[4]={1,0,-1,0};
        for(char c:instructions){//依照字母的指令
            if(c=='G'){//前進一格
                x += dx[d];
                y += dy[d];
            }else if(c=='R'){//右轉
                d = (d+1)%4;
            }else if(c=='L'){//左轉
                d =(d+3)%4;
            }
        }//離開回圈竟然會一直走有時候回不來
        cout<<'x'<<x<<'y'<<y<<endl;
        if(x==0 && y==0)return true;
        else return false;    
    }
};