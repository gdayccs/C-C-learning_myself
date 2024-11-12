#include<stdio.h>
#include<string.h>
#include<math.h>
void tran(char a[],int n)
{
	int i;
	for(i=n;a[i]!=0;i++)
	{
		a[i]=a[i+1];

	}
	a[i]='\0';

}
void fun(char a[],char b[])
{   /*int i,l;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
    	if('A'<=a[i]&&a[i]<='Z')
		*b++=a[i]+32;
	else
		if('a'<=a[i]&&a[i]<='z')
		*b++=a[i]-32;
     else continue;
    }

    *b=a[i];*/
    do
    {
    	if('A'<=*a&&*a<='Z')
		*b++=*a+32;
	else if('a'<=*a&&*a<='z')
		*b++=*a-32;
    }while(*a++!=0);
    *b=*a-1;
}
int main()
{   char a[100],b[100];
    int i;
    gets(a);
    fun(a,b);
    puts(b);

	return 0;
}
