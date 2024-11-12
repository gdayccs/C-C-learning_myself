#include<stdio.h>
#include<string.h>
#include<math.h>
void fun(char a[],int m)
{    int i,j,l;
     l=strlen(a);

	for(i=m;i<l;i++)
	{
		printf("%c",a[i]);
	}
	for(j=0;j<m;j++)
	{
		printf("%c",a[j]);
	}
}
int main()
{    int n,m,l;
char a[1000];
     l=strlen(a);
     gets(a);
     scanf("%d",&n);

     fun(a,n);

	return 0;
}
