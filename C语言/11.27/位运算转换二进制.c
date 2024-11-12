#include<stdio.h>
void Bin(int n)
{
	int m=n;
	int cnt = 0;
	int i;
	while(m>0)
	{
		m/=2;
		cnt++;
	}
	for(i=0;i<cnt;i++)
	{
		if((n&(1<<(cnt-1-i)))!=0)
		{
			printf("1");
		}
		else
			printf("0");
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	Bin(n);
}
