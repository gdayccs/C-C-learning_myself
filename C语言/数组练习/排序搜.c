#include <stdio.h>
#include <time.h>
#include<string.h>

void srandData(int *, int );//产生随机数的函数
void selectSort(int *, int );//选择排序具体实现函数
void swap(int *, int *);//两个数字实现交换的函数
void display(int *, int );//在屏幕输出结果函数

int main()
{
	const int N = 10;//定义常数
	int arr[N];//定义数组

	srandData(arr, N);
	selectSort(arr, N);
	display(arr, N);

	return 0;

}

void srandData(int *a, int n)
{


	for(int i = 0; i < n; i++)
	{     scanf("%d",a[i]);
		//a[i] = rand() % 50;//取50以下的数字
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
				min = j;//记下当前数字的位置
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
