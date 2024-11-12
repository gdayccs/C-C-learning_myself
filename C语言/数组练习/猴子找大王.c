#include<stdio.h>
#include<string.h>
#include<math.h>
#define size 100
int main()
{
    int a[size][size],i,j,k,n,m,b,cout=0;
    scanf("%d%d",&n,&m);
    /*for(j=0; j<n; j++)
        a[j]=j+1;
    for(i=m-1; i<size; i=i+m)
    {
        if(i<n)
        {
            printf("%d ",a[i]);
            a[i]=a[i+1];
            cout++;
        }
        else
        {

        }

    }*/
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
	{
		a[i][j]=j+1;
	}
    }
     for(k=m-1;k<n*n;k=k+m)
	{
		if(k>n)
		{

		}
	}
    return 0;
}
