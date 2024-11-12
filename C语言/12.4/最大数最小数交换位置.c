#include <stdio.h>
int main()
{
	int a[10],i,j,k,n,max,min,s,l,c,d,f;
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
d=a[0];
f=a[0];
		for(k=0;k<=9;k++)
		{
			if(d<=a[k])
			{d=a[k];
			max=k;}


		}
		for(l=0;l<=9;l++)
		{
			if(f>=a[l])
			{f=a[l];
			min=l;}


		}


	a[max]=f;
	a[min]=d;
	for(int y=0;y<=9;y++)
	{
		printf("%d ",a[y]);
	}
	return 0;
}
