//week06-1.cpp
//leetcode �ǲ߭p�e242valid anagram
//���A��Ӧr�� s, t�ЧP�_�L�̥Ϊ��r���A�O�_�ۦP(�i������)
class Solution {
public:
    bool isAnagram(string s, string t) {
        //���ݦr�ꪺ���׬O�_�ۦP
        if(s.length() !=t.length()) return false;//���P�A�N����

        //����r��s���r���ֿn�@�U
        int R[26]={};//�n���@��recycle�^����A������ڭ̪��r��
        for(int i=0; i<s.length();i++){
            char c=s[i]-'a';
            R[c]++;
        }
        //�A����ֿn���r���A��t�Ψ쨺�ǡB�����A��n�Χ�
        for(int i=0;i<t.length();i++){
            char c =t[i]-'a';
            R[c]--;
            if(R[c]<0) return false;
        }
        return true;
    }
};
