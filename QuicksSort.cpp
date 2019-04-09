#include <iostream>
#include "QuickSort.h"

//��ֵ���н���
void swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
} 

//������ֳ�������
int partition(int *a,int left ,int right)
{
	int j = left;  //������������ 
	int i = j-1;  //����ָ��С�ڻ�׼Ԫ�ص�λ��
	int key = a[right]; //��׼Ԫ��
	//���������˼�룬��ǰ�����Ҵ��ڻ�׼Ԫ�صķŵ��ұ�
	for (; j < right; ++j)
	{
		if(a[j] <= key)
			swap(&a[j], &a[++i]);
	}
	//�ѻ�׼Ԫ�طŵ��м�
	swap(&a[right], &a[++i]);
	//���������м��λ��
	return i;
}

//��������ĺ���
void quicksort(int *a,int left ,int right)
{
	if(left >= right)
		return;
	int mid = partition(a,left,right);
	quicksort(a,left,mid-1);
	quicksort(a,mid+1,right);
}
