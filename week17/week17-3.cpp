#include<stdio.h>
int main()
{
    int n=1234567892;///Q:請問個位數是多少個
    ///N%10 取餘數,就是個位數
    ///N%10 除10,前面的位數
    int sum=0;
    while(n>0){
        printf("%d => %d %d \n",n,n/10,n%10);
        sum+=n%10;
        n = n/10;///變小
    }
    printf("%d",sum);
}
