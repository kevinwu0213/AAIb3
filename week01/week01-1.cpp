///LeetCode 學習計畫　大海撈針　在haystack找到needle
///28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        ///藥用迴圈，把所有可能的位置，都找過一次
        ///ex.sadbutsad 找sad
        ///i:0 sad 把haystack剪前面N個字母
        ///    sad
        ///i:1 sad
        ///    abd
        ///i:2 sad
        ///    dbu
        int H=haystack.length(), N=needle.length();
        for(int i=0;i<= H-N;i++){
            if(haystack.substr(i,N)==needle) return i;
            ///從i開始，剪出N個字母 相同
        }
        return -1; ///沒找到答案
    }
};
