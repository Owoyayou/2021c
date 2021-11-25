#include<stdio.h>///只做9輪泡泡扶起來的模擬
int a[10]={9,8,7,6,5,4,3,2,1,0};///悲劇全部反過來
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");///印出陣列

    for(int i=0;i<10-1;i++)
    {
        ///===============================
        for(int k=0;k<10-1;k++)
        {
            if(a[i]>a[i+1])
            {///如果兩人相鄰，大小不對
                int t=a[i];///交換成對的順序
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
        for(int i=0;i<10;i++)printf("%d ",a[i]);
        printf("\n");
    }
}
