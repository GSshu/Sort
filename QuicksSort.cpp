#include <iostream>
#include "QuickSort.h"

//把值进行交换
void swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
} 

//把数组分成两部分
int partition(int *a,int left ,int right)
{
	int j = left;  //用来遍历数组 
	int i = j-1;  //用来指向小于基准元素的位置
	int key = a[right]; //基准元素
	//快速排序的思想，从前往后找大于基准元素的放到右边
	for (; j < right; ++j)
	{
		if(a[j] <= key)
			swap(&a[j], &a[++i]);
	}
	//把基准元素放到中间
	swap(&a[right], &a[++i]);
	//返回数组中间的位置
	return i;
}

//快速排序的函数
void quicksort(int *a,int left ,int right)
{
	if(left >= right)
		return;
	int mid = partition(a,left,right);
	quicksort(a,left,mid-1);
	quicksort(a,mid+1,right);
}
