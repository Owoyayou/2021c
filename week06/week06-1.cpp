#include<stdio.h>
int main()
{
    int a=999,b=100,temp;
    scanf("%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("a:%d b:%d temp:%d\n",a,b,temp);
}
