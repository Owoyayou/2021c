#include<stdio.h>///�u��9���w�w�߰_�Ӫ�����
int a[100];///�ΰ}�C�Ӧs100�ӼƦr
int main()
{ ///(1)input
    for(int i=0;i<100;i++)
    {
    	scanf("%d",&a[i]);
    }
    ///���U�ӥΪw�w�ƧǪk
	for(int k=0;k<100-1;k++)///(6)�n���X���A100-1��
	{
		for(int i=0;i<100-1;i++)///(5)�q����k���@��
		{
			if(a[i]>a[i+1])///(3)a[i],a[i+1]�۾F2�Ӥ��
			{
                int t=a[i];///(4)���諸�ɭԤ~�洫
                a[i]=a[i+1];
                a[i+1]=t;
            }

		}
	}
        for(int i=0;i<100;i++) printf("%d\n",a[i]);///(2)output
}
