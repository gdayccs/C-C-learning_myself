#include <stdio.h>
#include <stdlib.h>
int fun(int n);
int main()
{   int n;
scanf("%d",&n);
fun(n);

    return 0;
}
int fun(int n)
{
	if(n)
	{
	  fun(n/2);
       printf("%d",n&1);
	}
}
