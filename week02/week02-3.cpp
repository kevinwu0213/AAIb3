//week02-3.cpp
//leetcode �Ĥ@�D 1768. Merge Strings Alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N1=word1.length();//�r�����
        int N2=word2.length();
        string ans;//���ת��r��
        for(int i=0;i<max(N1,N2);i++){
            if(i<N1) ans+=word1[i];//�r����J����
            if(i<N2) ans+=word2[i];
        }
        return ans;
    }
};
