#include<stdio.h>
char line[300];
int main()
{
    printf("請輸入你的字串: ");
    scanf("%s",line);///不用&記憶的怪方法:%s有s
    printf("剛剛輸入的是=%s=",line);

    int ans=0;///想知道剛剛line裡有幾個'1'
    int i=0;
    while(line[i]!='\0'){
        if(line[i]=='1')ans++;
        i++;
    }
    printf("你剛剛輸入了%d個1\n",ans);
}
