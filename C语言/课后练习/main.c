#include<stdio.h>
#include<stdlib.h>
long Judge(long n)
{   long sum=0,j,flag;
    for(j=1;j<=n/2;j++)
    {
    if(n%j==0)
    sum+=j;
    }
    if( sum==n)
    flag=1;
    else flag=0;
    return flag;


}
int main()
{    long i,n;
     scanf("%ld",&n);
     if(n>9000)
	{
    for(i=2;i<9000;i++)
    {
    if(Judge(i))
    printf("%ld ",i);
    }}
    else
    {
    	for(i=2;i<n;i++)
    {
    if(Judge(i))
    printf("%ld ",i);
    }
    }
return 0;
}
