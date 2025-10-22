///week07-1b.cpp
///TAICA NYCU國立陽明交通大學電機系 期中考第六題
///input :1-9的數字output:繞圈圈的方形
///ex. Input:3
///3 3 3 3 3
///3 2 2 2 3
///3 2 1 2 3
///3 2 2 2 3
///3 3 3 3 3
///input 2有3層樓, input 3有5層樓 input 4有7層樓 input5有9層樓
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
        ///cout <<"現在是第i樓, i:"<<i;///step4:樓層鷹架
        cout<<endl;///step2:output, 跳行
    }
}
