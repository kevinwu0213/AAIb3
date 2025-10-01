///week04-2.cpp
///更多vector<int>a的初始化
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(3);///初始的長度3，裡面都放0
    vector<int> b(3,88);///初始長度3，裡面88

    int c[10]={1,2,3,9,8,7,4,5,6,0};///C宣告

    vector<int> d(c,c+3);///C陣列開始，在移3格結束
    for(int i=0;i<d.size();i++) cout<<d[i]<<" ";
    cout<<"這是用C語言的陣列輔助<幫忙C++陣列的初始化一堆值\n\n";

    vector<int> e(c,c+10);///在移10格結束
    for(int i=0;i<e.size();i++) cout<<e[i]<<" ";
    cout<<"這是用C語言的陣列輔助<幫忙C++陣列的初始化一堆值\n\n";
}
