///week01-4a.cpp �ϥ�C�y���g
#include <stdio.h>/// C�~��
int main()
{
    int a,b;
    scanf("%d%d", &a, &b); ///Ū���
    int ans=0;
    for(int i=a;i<=b;i++){
        if(i%3==0) ans+=i;
    }
    printf("%d", ans); ///�L���
}

