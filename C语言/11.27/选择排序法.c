ѡ������
for (i=0; i<n-1; i++)
{
    k = i;
    for (j=i+1; j<n; j++)
    {
		  if (score[j] > score[k])
           ��¼���ֱȽ�����߷ֵ�Ԫ���±�  k = j;
 		}
		��k�м�¼�����������λ��i����
           "�����ɼ�score[k]��score[i]"��
   	      "����ѧ��num[k]��num[i]"��
}

