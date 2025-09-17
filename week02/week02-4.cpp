//week02-4.cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256]={};//桶子裝字母，右邊大括號代表一開始是空的
        for(int i=0;i<s.length();i++){
            char c=s[i];//取出字母
            A[c]++;//放桶子裡
        }
        for(int i=0;i<t.length();i++){
            char c=t[i];//取出
            A[c]--;//從桶子拿出字母
            if(A[c]<0) return c;//拿玩變負的
        }
        return 0;
    }
};
