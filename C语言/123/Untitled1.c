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

/* �������ܣ�    ��ӡ�����õĴ���
   ������ڲ����� ��
   ��������ֵ��   ��
*/
void Func(void)
{
	int times = 1;		/*�Զ�����*/

	printf("Func() was called %d time(s).\n", times++);
}

