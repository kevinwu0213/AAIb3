//week11-1b.cpp leetcode 2154
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet;//hashset 快速照到有沒有這個數
        for(int num:nums) numsSet.insert(num);//C++進階迴圈
        while(numsSet.find(original)!=numsSet.end()){
            original=original*2;
        }
        return original;
    }
};
