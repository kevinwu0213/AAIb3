///week05-1.cpp
///leetcode 58.length of last word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);///��r��string��iostream��cin�ӥ�
        string word;///�r��
        ///ss>>word;///���Ocin >> word �@�ˡA�{�b��ss�i�H��ss>>word
        while(ss>>word){///�@��Ū�줣��Ū����
            ///�ƻ�Ƴ��S����
        }
        cout<<word;
        return word.length();
    }
};
