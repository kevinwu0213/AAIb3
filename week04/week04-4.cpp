//week04-4.cpp
//leetcode �ǲ߭p�e896mpnptpnic array
//�u���W�[or�u����֪��}�C�A���i�H�S���W�S����
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0, down=0;//�p�G���W�[up�ܦ�1�A�p�G�����down�ܦ�1
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]) up=1;
            if(nums[i-1]>nums[i]) down=1;
        }
        if(up==1 && down==1) return false;//�̫��ˬd�A���i�S�W�[�S���
        return true;
    }
};
