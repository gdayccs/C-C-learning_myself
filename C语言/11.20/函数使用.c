#include<stdio.h>
double fact(int n);
int main()
{
	int k,m;
	double c;
	scanf("%d%d",&k,&m);
	c=fact(m)/fact(k)/fact(m-k);
	printf("%f\n",c);
	return 0;
}
double fact(int n)
{
	int i;
	double result=1;
	for(i=2;i<=n;i++)
	{
		result*=i;
	}
	return result;
}
