//week06-1.cpp
//leetcode 學習計畫242valid anagram
//給你兩個字串 s, t請判斷他們用的字母，是否相同(可換順序)
class Solution {
public:
    bool isAnagram(string s, string t) {
        //先看字串的長度是否相同
        if(s.length() !=t.length()) return false;//不同，就失敗

        //先把字串s的字母累積一下
        int R[26]={};//要有一個recycle回收桶，分類放我們的字母
        for(int i=0; i<s.length();i++){
            char c=s[i]-'a';
            R[c]++;
        }
        //再把剛剛累積的字母，看t用到那些、劃掉，剛好用完
        for(int i=0;i<t.length();i++){
            char c =t[i]-'a';
            R[c]--;
            if(R[c]<0) return false;
        }
        return true;
    }
};
