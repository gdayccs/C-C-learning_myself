#include<stdio.h>
int main()
{
	int i,n,j;
	char s='*';
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i-1;j++)
			printf(" ");
		for(int k=n+2*(n-i);k>=1;k--)
			printf("%c",s);

			printf("\n");
	}
}
