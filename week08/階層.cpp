#include <stdio.h>

int main()

{
    int n,i;
 	scanf("%d",&n);

 	int ans=1;
 	for(i=1; i<=n; i++)
 	{
 		ans*=i;
 	}
 	printf("%d",ans);

}
