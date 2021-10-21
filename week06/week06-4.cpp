#include<stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d%d",&a,&b,&c);
	if(a>c)
	{///辨c程ぃ┋
		t=a;///ユ传
		a=b;
		b=t;
	}
	if(b>c)
	{///辨c程ぃ┋
		t=b;
		b=c;
		c=t;
	}
	if(c<a)
	{///辨c程ぃ┋
		t=c;
		c=a;
		a=t;
	}///絋﹚c琌程娩

	if(a+b<=c)printf("Error");
	else if(a*a+b*b==c*c)printf("à");
	else if(a*a+b*b<c*c)printf("秝à");
	else if(a*a+b*b>c*c)printf("綰à");

}
