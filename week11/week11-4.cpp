#include<stdio.h>///�u��9���w�w�߰_�Ӫ�����
int a[10]={9,8,7,6,5,4,3,2,1,0};///�d�@�����ϹL��
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");///�L�X�}�C

    for(int i=0;i<10-1;i++)
    {
        ///===============================
        for(int k=0;k<10-1;k++)
        {
            if(a[i]>a[i+1])
            {///�p�G��H�۾F�A�j�p����
                int t=a[i];///�洫���諸����
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
        for(int i=0;i<10;i++)printf("%d ",a[i]);
        printf("\n");
    }
}
