//week06-2.PP
//soit106 advance 008 c
#include <iostream>
using namespace std;
int f(int n)
{
	if(n>0) return n;
	return -n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
