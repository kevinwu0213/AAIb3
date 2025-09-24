///week03-5.cpp
///1502.arithmetic progression from sequence
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());//°}¦C¤p¨ì¤j
        int d=arr[1]-arr[0];//®td
        for(int i=1;i<arr.size();i++){
            if(arr[i] - arr[i-1]!=d) return false;
        }
        return true;
    }
};
