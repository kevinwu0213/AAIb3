///week07-2.cpp leetcode
///657.robot
class Solution {
public:
    bool judgeCircle(string moves) {
        //for(int i=0;i<moves.length();i++){¶Ç²Îªºfor°j°é
           // char c=moves[i];
        int x=0, y=0;
        for(char c:moves){
            if(c=='U'){
                y++;
            }else if(c=='D'){
                y--;
            }else if(c=='L'){
                x++;
            }else if(c=='R'){
                x--;
            }
        }
        if(x==0 && y==0) return true;
        else return false;
    }
};
