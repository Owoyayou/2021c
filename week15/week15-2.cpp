#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a%b;
    while(1){///�@�����j��
        if(c==0)break;///���}�j��
        a=b;
        b=c;
        c=a%b;
    }
    printf("%d",b);
}
