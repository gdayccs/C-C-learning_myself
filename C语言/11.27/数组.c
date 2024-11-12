#include<stdio.h>
#include<stdlib.h>
#define size 5
int func(int a[],int n)
{
    int i;
    int x=a[0];
    for(i=1; i<n; i++)
    {
        if(x>a[i])
            x=a[i];
        a[i]=i;
    }
    return x;
}
int main()
{
    int x=0;
    int a[size]= {6,8,5,10,1};
    x=func(a,size);
    printf("%d\n",x);
    for(int i=0; i<size; i++)
        printf("%d ",a[i]);
    return 0;
}
