//week09-2.cpp leetcode 73
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         //找所有的0，記下位子
         int M=matrix.size(),N=matrix[0].size();
         vector<bool> markI(M),markJ(N);
         for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){//遇到0，記下
                    markI[i]=true;
                    markJ[j]=true;
                }
            }
         }
         //把記下來的位子，他的橫行i 直行j 設0
         for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==true || markJ[j]==true) matrix[i][j]=0;
            }
         }
    }
};
