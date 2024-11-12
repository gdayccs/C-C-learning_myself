#include<stdio.h>
int isit(int digit)
{
int a,sum=0,n;
n=digit;
for(;digit>0;digit/=10)
{
    a=digit%10;
    sum=sum+a*a*a*a;
}
if(sum==n)
return 1;
else return 0;
}
main()
{
    for(int m=1000;m<=9999;m++)
    {
        if(isit(m))
            printf("%d\n",m);
    }
return 0;
}
