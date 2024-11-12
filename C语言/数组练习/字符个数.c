#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char str[1000];
	gets(str);
	int i=0,num=0,ch=0,other=0,blank=0,l;
	l=strlen(str);
	//printf("%d",l);
	for(i=0;str[i]!=0;i++)
	{
		if('A'<=str[i]&&str[i]<='Z'||'a'<=str[i]&&str[i]<='z')
			ch+=1;
		else if('0'<=str[i]&&str[i]<='9')
			num+=1;
		else if(str[i]==' ')
			blank+=1;
			else
				other++;

	}
	//other=l-ch-num-blank;
	printf("Ó¢ÎÄ×Ö·û:%d\nÊý×Ö×Ö·û:%d\n¿Õ¸ñ:%d\nÆäËû×Ö·û:%d\n",ch,num,blank,other);

	return 0;
}
