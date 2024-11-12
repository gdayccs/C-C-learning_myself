#include<stdio.h>
#include<string.h>
#include<math.h>
void Sort(int *a, int n)
{
    int i,j,k,m;

    for (i=0; i<n-1; i++)
    {
       k = i;

       for (j=i+1; j<n; j++)
    {   if(*(a+k)>*(a+j))
       {  m=*(a+k);
       	*(a+k)=*(a+j);
       	*(a+j)=m;

       }

    }
    }


}
int main()
{
    int a[100],i,j,m=10;
    for(i=0; i<10; i++)
    {
        scanf("%d",(a+i));
    }
    Sort(&a,m);
    for(j=0; j<10; j++)
    {
        printf("%d ",*(a+j));
    }
    return 0;
}
