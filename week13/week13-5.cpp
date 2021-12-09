#include<stdio.h>
int a[100];
int main()
{
    for(int i=0;i<100;i++){///從0開始a[0]到99 a[99]
        scanf("%d\n",&a[i]);
    }
    for(int i=99;i>=0;i--){///從99開始a[99]到0 a[0]
        printf("%d\n",a[i]);
    }
}
