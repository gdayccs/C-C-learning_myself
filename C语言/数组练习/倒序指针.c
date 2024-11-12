#include<stdio.h>
#include<string.h>
void fun(char *a,char *b)
{
	int i=0,j,l;
	l=strlen(a);
		for(j=l-1;j>=0;j--)
		{
			*(b++)=*(a+j);
		}
	     *(b+l-1)='\0';
}
int main()
{
	char a[1000],b[1000];
	int i;
	gets(a);
	fun(&a,&b);
	puts(b);
}
