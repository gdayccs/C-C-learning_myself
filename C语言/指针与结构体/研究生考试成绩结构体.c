#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct STUDENT
{
	int id;
	char name[20];
	int politic;
	int english;
	int math;
	int major;
	int pen;
	int view;
	int first;
	int again;
	float total;
};

int main()
{
	struct STUDENT data[100]={0};
	int num,i,j,k;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d%s%d%d%d%d%d%d", &data[i].id, data[i].name,&data[i].politic,&data[i].english,&data[i].math,&data[i].major,&data[i].pen,&data[i].view);
			data[i].first=data[i].politic+data[i].english+data[i].math+data[i].major;
			data[i].again=data[i].pen+data[i].view;
			data[i].total=0.5*(data[i].first+data[i].again);
	}
    int id[100],mark[100],p;
     for(i=0;i<num;i++)
	{
		id[i]=i;
		mark[i]=data[i].total;
	}
	for(i=0;i<num;i++)
		for(j=i;j<num;j++)
	{
		if(mark[i]<mark[j])
		{
			p=id[i];
			id[i]=id[j];
			id[j]=p;
			p=mark[i];
			mark[i]=mark[j];
			mark[j]=p;
		}
	}
	printf("考号--- 姓名---- 政治 英语 数学 专业 笔试 面试 初试 复试 总分-\n");
	for(j=0;j<num;j++)
	{
		i=id[j];

		printf("%-7d %-8s %4d %4d %4d %4d %4d %4d %4d %4d %5.1f\n",data[i].id,data[i].name,data[i].politic,data[i].english,data[i].math,
			data[i].major,data[i].pen,data[i].view,data[i].first,data[i].again,data[i].total);
	}


	return 0;
}

