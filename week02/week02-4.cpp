//week02-4.cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256]={};//��l�˦r���A�k��j�A���N��@�}�l�O�Ū�
        for(int i=0;i<s.length();i++){
            char c=s[i];//���X�r��
            A[c]++;//���l��
        }
        for(int i=0;i<t.length();i++){
            char c=t[i];//���X
            A[c]--;//�q��l���X�r��
            if(A[c]<0) return c;//�����ܭt��
        }
        return 0;
    }
};
