//week07-3.cpp
//682.basebll game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op:operations){//C++�i����
            cout <<"�{�bŪ��F: "<<op<<"\n";//�ݥL�O�ֵ��@�U�R��
            if(op[0]=='C'){//if�P�_�n������A�M���̫�@��
                a.pop_back();
            }else if (op[0]=='D'){//�̫�@���ܨ⭿�b�[��̫᭱
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
