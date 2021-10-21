#include<stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d%d",&a,&b,&c);
	if(a>c)
	{///希望c最大，但不幸
		t=a;///交換
		a=b;
		b=t;
	}
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	if(c<a)
	{
		t=c;
		c=a;
		a=t;
	}

	printf("最大的在c:%d",c);

}
