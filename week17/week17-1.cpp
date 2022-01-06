#include<stdio.h>
int main()
{
    int n=1234567892;///Q:叫拜计琌ぶ
    ///N%10 緇计,碞琌计
    ///N%10 埃10,玡计
    printf("%d => %d %d \n",n,n/10,n%10);
    n = n/10;///跑
    printf("%d => %d %d \n",n,n/10,n%10);
    n = n/10;
    printf("%d => %d %d \n",n,n/10,n%10);
    n = n/10;
    printf("%d => %d %d \n",n,n/10,n%10);
    n = n/10;
}
