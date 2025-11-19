///week01-4a.cpp 使用C語言寫
#include <stdio.h>/// C外掛
int main()
{
    int a,b;
    scanf("%d%d", &a, &b); ///讀資料
    int ans=0;
    for(int i=a;i<=b;i++){
        if(i%3==0) ans+=i;
    }
    printf("%d", ans); ///印資料
}

