#include <stdio.h>
#include <stdlib.h>
int main()
{   int a,b;
int static c=0;
int i,j;
scanf("%d",&a);
if(a<=1)
{
	printf("请输入大于1的正整数");

}
else
{
	for(i=2;i<=a;i++)
	{
		 for(j=1;j<=i;j++)
		 {
		 	if(i%j==0)
			{
				 c++;

		 }
		 }
             while(c==2)
		 {
		 	printf("%d\n",i);

		  c=0;}






	}
}
	return 0;
}
