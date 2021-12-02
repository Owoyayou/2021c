#include<stdio.h>
int a[8]={2, 0, 2, 1, 1, 2, 0, 2};
///      [0][1][2][3][4][5][6][7]
int main()
{ ///(1)input
    for(int i=0;i<8;i++)
    {
        if(a[i]==a[8-1-i])
        {
            printf("%d %d ¬Û¦P\n",a[i],a[8-1-i]);
        }
    }
}
