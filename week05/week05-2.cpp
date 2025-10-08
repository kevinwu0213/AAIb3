///week05-2.cpp
///搞懂stringstream
#include <iostream>///為了cin cout
#include <string>///字串string
#include <sstream>///string變stream的外掛
using namespace std;///為了不寫std::cin
int main()
{
    string line;///一整行的字串
    getline(cin,line);///一次讀一整行
    cout<<line;

    stringstream ss(line);///把string變成stream
    string word;
    while(ss>>word){
        cout<<"ss讀到一個字: "<<word<<endl;
    }
}
