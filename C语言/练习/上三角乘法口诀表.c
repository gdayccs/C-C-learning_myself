#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
	for(i=1;i<=9;i++)
	{   switch(i)
		      {case 1:break;
		      case 2:printf("  ");break;
		      case 3:printf("     ");break;
		      case 4:printf("        ");break;
		      case 5:printf("           ");break;
		      case 6:printf("              ");break;
		      case 7:printf("                 ");break;
		      case 8:printf("                    ");break;
		      case 9:printf("                       ");break;
		}
		for(k=i;k<=9;k++)
		{    if(k==1)
		{    printf(" %d",k);
			continue;
		}


			printf("%3d",i*k);
		}

         printf(" \n");
	}
}
