#include<stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");///印出陣列

    for(int i=0;i<10-1;i++)
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
///-------------------------------------------
    for(int i=0;i<10-1;i++)
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
///-------------------------------------------
    for(int i=0;i<10-1;i++)
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
///-------------------------------------------
    for(int i=0;i<10-1;i++)
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
