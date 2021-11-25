#include<stdio.h>///把質數全部印出
int a[10000000];
int main()
{
    int m,ans=0;
    scanf("%d",&m);

    for(int i=2;i<m;i++)
    {
        if(a[i]==0)///找到質數i
        {
            printf("%d ",i);///印出i
            ans++;///多一個
            for(int k=i+i;k<m;k+=i)a[k]=1;
        }
    }
    printf("總共: %d\n",ans);
}
