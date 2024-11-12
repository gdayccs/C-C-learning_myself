#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char a[100];
	int i,j;
	gets(a);
	i=strlen(a);
		for(j=i-1;j>=0;j--)
	{
		printf("%c",a[j]);
	}


	return 0;
}
