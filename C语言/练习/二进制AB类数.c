#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i1=0,i0=0,w;
    scanf("%d",&n);
    w=n;
    while(n!=0)
    {
    	if(n%2==1)
		i1++;
	else
		i0++;
	n=n/2;
    }
    if(i1>i0)
	printf("%d是A类数",w);
	else
    printf("%d是B类数",w);
	return 0;
}
