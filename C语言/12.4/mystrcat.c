#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mystrcat(char a[],char b[])
{    int len=strlen(b);
	int i;
	for(i=0;a[i]!=0;i++)
	{
		b[len++]=a[i];
	}
	b[len]=0;
}
int main()
{
	char a[100]="Hello World";
	char b[100]="china";
	char c[1000]=mystrcat(b[100],a[100]);
	printf("%s",c);
	return 0;
}
