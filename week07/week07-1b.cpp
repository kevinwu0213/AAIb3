///week07-1b.cpp
///TAICA NYCU��߶�����q�j�ǹq���t �����ҲĤ��D
///input :1-9���Ʀroutput:¶��骺���
///ex. Input:3
///3 3 3 3 3
///3 2 2 2 3
///3 2 1 2 3
///3 2 2 2 3
///3 3 3 3 3
///input 2��3�h��, input 3��5�h�� input 4��7�h�� input5��9�h��
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<2*n;i++){
        for(int j=1;j<2*n;j++){
            if(j>1) cout<<" ";
            int d=max(abs(i-n), abs(j-n));
            cout << d+1;///cout<<n;
        }
        ///cout <<"�{�b�O��i��, i:"<<i;///step4:�Ӽh�N�[
        cout<<endl;///step2:output, ����
    }
}
