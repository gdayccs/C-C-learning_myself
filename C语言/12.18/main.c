#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mystrlen(char s[])//(char *s)
{
	int cnt;
	for(cnt=0;s[cnt]!=0;cnt++)//*s++
	{}
	return cnt;

}
void mystrcpy(char dst[],char src[])
{
	int i;
	do
	{
		dst[i]=src[i];//*dst++=*src;
	}while(src[i++]!=0);//*src++!=0;

}

int main()
{
  printf("%d",sizeof(double));
    return 0;
}
