///week05-3b.cpp �T�X�@ p1/p2 Input output
///CPE��2�D UVA483word scramble ��r�ˤ�
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>///part4 �t��k
using namespace std;
int main()
{
    string line;///part 1:input
    while(getline(cin,line)){
///Ū�J1��A�@��Ū��ctrl z�~����
        stringstream ss(line);///part3:��r��ΨӬq�r
        string word;
        ss>>word;///p5
        reverse(word.begin(),word.end());
        cout<<word;///p5
        while(ss>>word){
            reverse(word.begin(),word.end());///�ϹL�ӭn�Ψ�algorithm
            cout<<" "<<word;
        }
        cout<<endl;
        ///2:output
        ///cout<<line<<endl;
    }
}


