#include <stdio.h>
void Func(void);
main()
{
	int i;

	for (i=0; i<10; i++)
	{
		Func();
	}
}

/* 函数功能：    打印被调用的次数
   函数入口参数： 无
   函数返回值：   无
*/
void Func(void)
{
	int times = 1;		/*自动变量*/

	printf("Func() was called %d time(s).\n", times++);
}

