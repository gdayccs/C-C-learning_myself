#include<stdio.h>
int main()
{
	int n,i,j,k,sum = 0;
	scanf("%d",&n);
	for(i = 1;i<=n;i++)
	{
		sum = sum  + i;
		printf("i=%d sum=%d ",i,sum);
	}
	printf("\nsum=1%d\n",sum);
	return 0;
}
