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
            //都沒找到答案，9,9,9一直進位，要補1
    digits.insert(digits.begin(),1);//開始的地方，插入1
    return digits;
    }
};
