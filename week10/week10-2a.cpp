//week10-2a.cpp leet1523
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
            if(i%2==1) ans++;
        }//¿ùªºª©¥» ¥Îfor
        return ans;
    }
};
