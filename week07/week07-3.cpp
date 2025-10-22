//week07-3.cpp
//682.basebll game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op:operations){//C++進階詞
            cout <<"現在讀到了: "<<op<<"\n";//看他是誰等一下刪掉
            if(op[0]=='C'){//if判斷要麼模擬，清掉最後一位
                a.pop_back();
            }else if (op[0]=='D'){//最後一位變兩倍在加到最後面
                a.push_back(a.back()*2);
            }else if(op[0]=='+'){
                int temp=a.back();
                a.pop_back();
                int temp2=a.back();
                a.push_back(temp);
                a.push_back(temp+temp2);
            }else{
                a.push_back(stoi(op) );
            }
        }
        int ans=0;
        for(int now:a){
            ans+=now;//cout<<now<<" ";
        }
        return ans;//return 0;
    }
};
