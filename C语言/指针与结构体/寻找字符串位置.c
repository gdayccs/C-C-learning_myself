#include<stdio.h>
#include<string.h>
int fun(char a[],char b[],int m)
{    int j,l;
     l=strlen(b);
	for(j=0;b[j]!=0;j++)
	{
		if(b[j]!=a[m+j])
		{
			return -1;
		}
	}
	//printf("%d\n",j);
      if(j==l)
		printf("%d\n",m+1);
}

int main()
{
	char a[100],b[100],c[100];
	int i=0,j=0,k=0,l,m,n,p=0;
	gets(a);
	gets(b);
	l=strlen(b);
	do
	{if(b[0]==a[i])
	   {
	   	c[j]=i;
           j++;
	   }

			i++;
	}while(a[i]!=0);
     for(k=0;c[k]!=0;k++)
	{
		if(fun(a,b,c[k])==-1)
		{
			p++;
		}
	}
	if(p==k)
		printf("-1");


return 0;
}
