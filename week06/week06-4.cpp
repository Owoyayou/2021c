#include<stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d%d",&a,&b,&c);
	if(a>c)
	{///ϣ��c��󣬵�����
		t=a;///���Q
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

	printf("������c:%d",c);

}
