选择法排序
for (i=0; i<n-1; i++)
{
    k = i;
    for (j=i+1; j<n; j++)
    {
		  if (score[j] > score[k])
           记录此轮比较中最高分的元素下标  k = j;
 		}
		若k中记录的最大数不在位置i，则
           "交换成绩score[k]和score[i]"，
   	      "交换学号num[k]和num[i]"；
}

