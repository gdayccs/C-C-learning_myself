#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<=0)
		printf("����");//Ĵָ��1 9 17����+8
	else if((a-1)%8==0)//ʳָ:2 8 10����+6 +2
	printf("Ĵָ");//��ָ��3 7 11����+4
	else if((a-3)%4==0)
	printf("��ָ");
	else if((a-5)%8==0)
	printf("Сָ");
	else if((a-2)%8==0||(a-8)%8==0)
		printf("ʳָ");
		else
		printf("����ָ");
	//����ָ��4 6 12����+2 +6
}                   //Сָ:5 13����+8
