#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int a[20],i,n=0,sum=0;
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>=0)
		{
			n++;
			sum+=a[i];
		}
		else
			continue;
	}
	printf("%d:%d",n,sum);
	return 0;
}
