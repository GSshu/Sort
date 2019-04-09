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

//合并两个已经排好序的数组
void merge (int *a ,int left, int mid ,int right)
{
	int len = right -left + 1;  //数组的长度
	int *temp = new int[len];  //分配len个长度的临时数组
	int k = 0;
	int i = left ;
	int j = mid +1;
	while (i<=mid && j<=right)
	{
		//选择较小的存入临时数组
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
