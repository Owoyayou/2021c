#include<stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>c){
		t=a;
		a=c;
		c=t;
	}
	if(b>c){
		t=b;
		b=c;
		c=t;
	}
	if(c<a){
		t=c;
		c=a;
		a=t;
	}
	printf("max:%d\nmid:%d\nmin:%d",a,b,c);
}
