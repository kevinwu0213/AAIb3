///LeetCode �ǲ߭p�e�@�j�����w�@�bhaystack���needle
///28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        ///�ĥΰj��A��Ҧ��i�઺��m�A����L�@��
        ///ex.sadbutsad ��sad
        ///i:0 sad ��haystack�ūe��N�Ӧr��
        ///    sad
        ///i:1 sad
        ///    abd
        ///i:2 sad
        ///    dbu
        int H=haystack.length(), N=needle.length();
        for(int i=0;i<= H-N;i++){
            if(haystack.substr(i,N)==needle) return i;
            ///�qi�}�l�A�ťXN�Ӧr�� �ۦP
        }
        return -1; ///�S��쵪��
    }
};
