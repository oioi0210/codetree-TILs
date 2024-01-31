#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int ary[100];
    ary[2]=n;
    ary[1]=1;
    printf("%d %d ",ary[1],ary[2]);

    for(int i=3; ; i++)
    {
        ary[i]=ary[i-2]+ary[i-1];
        printf("%d ",ary[i]);
        if(ary[i]>100)
        {
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}