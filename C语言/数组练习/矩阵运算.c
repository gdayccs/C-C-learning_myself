#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{    int a[5][5];
     int i,j,k;
     int sum=0,pro=1;
     for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{scanf("%d",&a[i][j]);
		  if(i==j||(i+j)==4)
		  {
		  	sum+=a[i][j];
		  	//printf("%d\n",a[i][j]);
		  	if(i%2==0&&j%2==0)
		  {
		  	pro*=a[i][j];
		  	//printf("%d\n",a[i][j]);
		  }
		  }


		}
	}
	printf("%d:%d",sum,pro);
	return 0;
}
