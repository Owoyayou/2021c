#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a%b;
    printf("老大:%d 老二:%d 老三:%d:\n",a,b,c);
    while(1){
        if(c==0){
            printf("因為c是0，就break離開迴圈\n");
            break;
        }
        a=b;///老大換人
        b=c;///老二換人
        c=a%b;///新的老三
        printf("老大:%d 老二:%d 老三:%d:\n",a,b,c);
    }
    printf("離開迴圈後，答案是b: %d \n",b);
}
