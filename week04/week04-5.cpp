//week04-5.cpp
//66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size();
        for(int i=N-1;i>=0;i--){
            if(digits[i]==9) digits[i]=0;
            else{
                digits[i]++;
                return digits;
            }
        }
            //���S��쵪�סA9,9,9�@���i��A�n��1
    digits.insert(digits.begin(),1);//�}�l���a��A���J1
    return digits;
    }
};
