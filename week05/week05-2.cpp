///week05-2.cpp
///�d��stringstream
#include <iostream>///���Fcin cout
#include <string>///�r��string
#include <sstream>///string��stream���~��
using namespace std;///���F���gstd::cin
int main()
{
    string line;///�@��檺�r��
    getline(cin,line);///�@��Ū�@���
    cout<<line;

    stringstream ss(line);///��string�ܦ�stream
    string word;
    while(ss>>word){
        cout<<"ssŪ��@�Ӧr: "<<word<<endl;
    }
}
