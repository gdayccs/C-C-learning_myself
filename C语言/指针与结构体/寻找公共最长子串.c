#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],c[100];
	scanf("%s%s",a,b);//��ĿҪ���У�û�пո���gets�����Ļ��ո�Ҳ���ַ��ڣ�
	int la=strlen(a),lb=strlen(b);
	int i=0,j=0,k=0,cnt=0,flag=0;
	for(i=0;i<la;i++)

		for(j=0;j<lb;j++)
		{
			for(k=0;a[i+k]==b[j+k];k++);
			if(k>=cnt)
		     {
				cnt=k;
			     flag=i;
		     }
		}

	for(i=0;i<cnt;i++)
		c[i]=a[flag+i];
	c[cnt]=0;
	puts(c);

	return 0;
}
