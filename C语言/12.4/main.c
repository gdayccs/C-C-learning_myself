#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int mystrlen(char s[])
{
	int cnt,i;
	for(i=1;s[i]!='\0';i++);
	cnt=i;
     return cnt;
}
void myctrcpy(b[],a[])
{

}
int main()
{
   /*char str[100]="123456789";
   printf("%d\n",mystrlen(str));//即strlen的函数功能
*/


   char a[20]="Hello world";
   char b[20];
   printf("%s",strcpy(b[20],a[20]));
    return 0;
}
