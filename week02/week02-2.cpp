///week02-2.cpp C++
///�ĥ�C++���r�� �ϹL��
#include <iostream>
#include <string>
using namespace std;///�R�W�Ŷ�
int main()
{
    cout<<"�п�J�Ʀr: ";
    string a,ans; ///C++�r��
    cin >> a;///Ū�J�r��
    ///��L�Ӫ��j�� �r�ꪺ���ץs a.length()
    for(int i=a.length()-1;i>=0;i--){
        ans+=a[i];
    }
    cout<<a<<ans;
}
