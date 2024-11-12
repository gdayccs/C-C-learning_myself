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

void Func(void)
{
	static int times = 1;

	printf("Func() was called %d time(s).\n", times++);
}

