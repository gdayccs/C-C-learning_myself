#include<stdio.h>
#include<string.h>
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
void play(int a[])
{
	int i;
	for(i=0;i<9;i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int a[10],i,j;
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	 for(j=0;j<9;j++)
	 {
	 	if(a[i]>a[j])
		swap(a[i],a[j]);
	 }
	play(a);
}

