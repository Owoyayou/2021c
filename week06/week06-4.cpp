#include<stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d%d",&a,&b,&c);
	if(a>c)
	{///�Ʊ�c�̤j�A������
		t=a;///�洫
		a=b;
		b=t;
	}
	if(b>c)
	{///�Ʊ�c�̤j�A������
		t=b;
		b=c;
		c=t;
	}
	if(c<a)
	{///�Ʊ�c�̤j�A������
		t=c;
		c=a;
		a=t;
	}///�T�wc�O�̤j��

	if(a+b<=c)printf("Error");
	else if(a*a+b*b==c*c)printf("����");
	else if(a*a+b*b<c*c)printf("�w��");
	else if(a*a+b*b>c*c)printf("�U��");

}
