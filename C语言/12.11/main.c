#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{  int t;
   t=*a;
   *a=*b;
   *b=t;

}
int main()
{
    /*short *p,a[5]={1,3,5,6,3};
    p = a;
    printf("%d %d",*p,*(p+3));*/
    int a=5,b=10;
    swap(&a,&b);
    printf("%d %d",a,b);
        return 0;
}
