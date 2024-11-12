#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,m,n,a,k,b;
    scanf("%d%d",&m,&n);
    if(m>n)
        k=n;
    else
        k=m;
    for(i = 1; i <= k; i++)
    {
        if(m % i==0&&n % i==0)
            a=i;
    }
    b=m*n/a;
    printf("%d %d",a,b);
    return 0;
}
