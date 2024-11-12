#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<=0)
		printf("错误");//拇指：1 9 17……+8
	else if((a-1)%8==0)//食指:2 8 10……+6 +2
	printf("拇指");//中指：3 7 11……+4
	else if((a-3)%4==0)
	printf("中指");
	else if((a-5)%8==0)
	printf("小指");
	else if((a-2)%8==0||(a-8)%8==0)
		printf("食指");
		else
		printf("无名指");
	//无名指：4 6 12……+2 +6
}                   //小指:5 13……+8
