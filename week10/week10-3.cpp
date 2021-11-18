#include<stdio.h>
int main()
{
    int a =100;
    int b=200;
    int c;
    printf("a:%d b:%d c:%d\n",a,b,c);
    ///一次宣告多個變數
    int d[5]={100,200,300,400,500};

    for(int i=0;i<5;i++){
        printf("d[%d]: %d\n",i,d[i]);
    }
}
