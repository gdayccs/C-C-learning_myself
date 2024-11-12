#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	/*int a,b;
	char s,d;
	int m;
	scanf("%d %c%d %c",&a,&s,&b,&d);
	if((s=='+')&&(d=='='))
	{    m=a+b;
		printf("%d%c%d%c%d",a,s,b,d,m);
	}
	else if((s=='-')&&(d=='='))
	   {
	   	m=a-b;
		printf("%d%c%d%c%d",a,s,b,d,m);

	   }
	else if((s=='*')&&(d=='='))
	 {
	 	m=a*b;
		printf("%d%c%d%c%d",a,s,b,d,m);
	 }

	else if((s=='/')&&(d=='='))
	  {
	  	m=a/b;
	   printf("%d%c%d%c%d",a,s,b,d,m);
	  }

	else if((s=='%')&&(d=='='))
	   {
	   	m=a%b;
		printf("%d%c%d%c%d",a,s,b,d,m);
	   }

	else
	{
		printf("input error!");
	}*/


		/*int a,b;
		int ret;

		do
		{printf("Input(n1,n2):");

			fflush(stdin);
			ret=scanf("%d,%d",&a,&b);
			if(ret!=2||a<0||b<0)
			{
				printf("input error!\n");
			}
			else{break;}
		}while(ret!=2||a<0||b<0);
		printf("Input(n1,n2):%d",a+b);*/
		/*int i;
		double sum=0;
		for(i=0;i<64;i++)
		{

			sum=sum+pow(2,i);
		}


          printf("sum=%f",sum/1.42e8);*/

          /*int a,i,sum=0;
          scanf("%d",&a);
          for(i=1;i<=a;i++)
		{
			if(i%7==0||(i-7)%10==0)
			{
				sum+=i;
			}
			else;



		}
		printf("%d",sum);*/
		/*int i,j;
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%dx%d=%d ",j,i,j*i);
			}
			printf("\n");
		}*/
		int n;
		srand(100);
		n=rand();
		printf("%d\n",n);
	return 0;
}
