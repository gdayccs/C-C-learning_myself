#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int mystrlen(char s[])
{
	int cnt;
	for(cnt=1;s[cnt]!='\0';cnt++);
     return cnt;
}

int main()
{
   char s[80];
   gets(s);
   printf("\"%s\" have %d character.",s,mystrlen(s));
   puts(s);
return 0;
}
