//week12-3.cpp leetcode 976
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        //for(int i=nums.size()-1;i>=0;i--){迴圈大到小式一次，倒過來的迴圈
          //  cout<<nums[i]<<" ";印出大到小的數
        //}
        for(int i=nums.size()-1;i>=2;i--){
            if(nums[i]<nums[i-1]+nums[i-2]) return nums[i]+nums[i-1]+nums[i-2];
        }//如果順利兩邊和大於第三邊，就把週長加起來
        return 0;
    }
};
