///week03-1.cpp
///c++�}�C vector<int>
#include <iostream> ///cin cout
#include <vector>///�}�C vector
using namespace std;
int main()
{
    cout<<"�п�J4�ӼƦr: ";
    vector<int> a;///���Y�ۦp���}�C
    int now;
    for(int i=0;i<4;i++){
        cin>>now;
        a.push_back(now);
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }
    cout<<"�{�b�{���X�̭��A�S���J�F99 98��Ʀr�A���G?\n";
    ///cin>>now;
    a.push_back(99);
    a.push_back(88);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';///�Ʀr�᭱���Ů�
    }
}
