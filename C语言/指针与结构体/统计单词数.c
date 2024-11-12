#include<stdio.h>
#include<string.h>
int CCSNB(int ccs)
{
	if(ccs>='A'&&ccs<='Z'||ccs>='a'&&ccs<='z'||ccs>='0'&&ccs<='9')
		return 1;
	else return 0;
}
int main()
{
	char a[1000];
	int i=0;
	int k=0;
	gets(a);
	for(int j=0;j<=strlen(a);j++)
	{
		if(CCSNB(a[j])&&!CCSNB(a[j+1]))
			k++;
	}
	printf("%d",k);
	return 0;
}
