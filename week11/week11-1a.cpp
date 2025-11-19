//week11-1a.cpp leetcode 2154
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        //while 一直做
        while(1){
            int found=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==original) found=1;
            }
            if(found==0) break;
            else original=original*2;//有找到，繼續乘
        }
        return original;
    }
};
