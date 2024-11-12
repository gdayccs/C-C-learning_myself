#include <stdio.h>
#include <time.h>
#include<string.h>

void srandData(int *, int );//����������ĺ���
void selectSort(int *, int );//ѡ���������ʵ�ֺ���
void swap(int *, int *);//��������ʵ�ֽ����ĺ���
void display(int *, int );//����Ļ����������

int main()
{
	const int N = 10;//���峣��
	int arr[N];//��������

	srandData(arr, N);
	selectSort(arr, N);
	display(arr, N);

	return 0;

}

void srandData(int *a, int n)
{


	for(int i = 0; i < n; i++)
	{     scanf("%d",a[i]);
		//a[i] = rand() % 50;//ȡ50���µ�����
		//printf("%d",a[i]);
	}


}

void swap(int *b, int *c)
{

	int temp = *c;
	*c = *b;
	*b = temp;
}

void selectSort(int *e, int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		int min = i;
		for(int j = i + 1; j < n; j++)
		{
			if(e[min] > e[j])
			{
				min = j;//���µ�ǰ���ֵ�λ��
			}
		}
		if(min != i)
		{
			swap(&e[min], &e[i]);
		}
	}
}
void display(int *d, int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ",d[i]);
	}

}
