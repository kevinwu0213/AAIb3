///week05-1.cpp
///leetcode 58.length of last word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);///把字串string當iostream的cin來用
        string word;///字串
        ///ss>>word;///像是cin >> word 一樣，現在的ss可以用ss>>word
        while(ss>>word){///一直讀到不能讀為止
            ///甚麼事都沒有做
        }
        cout<<word;
        return word.length();
    }
};
