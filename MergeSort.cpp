#include "MergeSort.h"

void mergesort(int *a ,int left ,int right)
{
	if(left >right)
		return ;
	int mid = (left+right)/2;
	mergesort(a, left , mid-1);
	mergesort(a, mid+1, right);
	merge(a, left ,right ,mid);
}

//�ϲ������Ѿ��ź��������
void merge (int *a ,int left, int mid ,int right)
{
	int len = right -left + 1;  //����ĳ���
	int *temp = new int[len];  //����len�����ȵ���ʱ����
	int k = 0;
	int i = left ;
	int j = mid +1;
	while (i<=mid && j<=right)
	{
		//ѡ���С�Ĵ�����ʱ����
		temp[k++] = a[i] <= a[j] ? a[i++] : a[j++];
	}
	while(i<= mid)
	{
		temp[k++] = a[i++];
	}
	while(j<=right)
	{
		temp[k++] = a[j++];
	}
	for (int k = 0; k < len; k++)
	{
		a[left++] = temp[k];
	}
}
