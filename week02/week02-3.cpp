//week02-3.cpp
//leetcode 第一題 1768. Merge Strings Alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N1=word1.length();//字串長度
        int N2=word2.length();
        string ans;//答案的字串
        for(int i=0;i<max(N1,N2);i++){
            if(i<N1) ans+=word1[i];//字母放入答案
            if(i<N2) ans+=word2[i];
        }
        return ans;
    }
};
