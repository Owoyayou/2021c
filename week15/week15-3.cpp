#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a%b;
    printf("�Ѥj:%d �ѤG:%d �ѤT:%d:\n",a,b,c);
    while(1){
        if(c==0){
            printf("�]��c�O0�A�Nbreak���}�j��\n");
            break;
        }
        a=b;///�Ѥj���H
        b=c;///�ѤG���H
        c=a%b;///�s���ѤT
        printf("�Ѥj:%d �ѤG:%d �ѤT:%d:\n",a,b,c);
    }
    printf("���}�j���A���׬Ob: %d \n",b);
}
