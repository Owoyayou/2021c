#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    ///最大公因數:可以整除的最大的數字
    int ans=1;
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0)ans=i;
        }
    printf("%d",ans);
}
