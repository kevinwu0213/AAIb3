///week05-3b.cpp 三合一 p1/p2 Input output
///CPE第2題 UVA483word scramble 把字弄反
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>///part4 演算法
using namespace std;
int main()
{
    string line;///part 1:input
    while(getline(cin,line)){
///讀入1行，一直讀到ctrl z才結束
        stringstream ss(line);///part3:把字串用來段字
        string word;
        ss>>word;///p5
        reverse(word.begin(),word.end());
        cout<<word;///p5
        while(ss>>word){
            reverse(word.begin(),word.end());///反過來要用到algorithm
            cout<<" "<<word;
        }
        cout<<endl;
        ///2:output
        ///cout<<line<<endl;
    }
}


