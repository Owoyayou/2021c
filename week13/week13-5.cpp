#include<stdio.h>
int a[100];
int main()
{
    for(int i=0;i<100;i++){///�q0�}�la[0]��99 a[99]
        scanf("%d\n",&a[i]);
    }
    for(int i=99;i>=0;i--){///�q99�}�la[99]��0 a[0]
        printf("%d\n",a[i]);
    }
}
