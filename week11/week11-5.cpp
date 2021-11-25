#include<stdio.h>///只做9輪泡泡扶起來的模擬
int a[100];///用陣列來存100個數字
int main()
{ ///(1)input
    for(int i=0;i<100;i++)
    {
    	scanf("%d",&a[i]);
    }
    ///接下來用泡泡排序法
	for(int k=0;k<100-1;k++)///(6)要做幾次，100-1次
	{
		for(int i=0;i<100-1;i++)///(5)從左到右巡一輪
		{
			if(a[i]>a[i+1])///(3)a[i],a[i+1]相鄰2個比較
			{
                int t=a[i];///(4)不對的時候才交換
                a[i]=a[i+1];
                a[i+1]=t;
            }

		}
	}
        for(int i=0;i<100;i++) printf("%d\n",a[i]);///(2)output
}
