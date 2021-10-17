#include<stdio.h>
int main()
{///0不成立，其他都成立
    if(-2)printf("-2成立");
    if(-1)printf("-1成立");
    if(0)printf("0不成立");///不會印出來
    if(1)printf("1成立");
    if(2)printf("2成立");
    if(3)printf("3成立");
    if(9999)printf("9999成立");
}
