#include <iostream>
#include "SelectSort.h"

void selectsort(int *a ,int n)
{
	for (int i = 0; i < n; i++)
	{
		int key = i;  //临时变量用来存储最小的变量
		for (int j = i+1; j < n; j++)
		{
			if(a[j]<a[key])
				key =j; //交换，找到最小的数值
		}
	    if(key !=i)
	    {
			int temp = a[key];
			a[key] = a[i];
			a[i] =temp;
	    }
	}
}

//进行堆排序，依次选出最大值放在最后面
void heapsort(int *a ,int n)
{
	creatheap(a,n/2-1,n);
	for (int j = n-1; j >=0; j--)
	{
		int temp = a[0];
		a[0] = a[j];
		a[j] =temp;

		int i = j/2-1;
		creatheap(a, i, j);
	}
}

//　　创建大堆顶，i为当前节点，n为堆的大小
//    从第一个非叶子结点i从下至上，从右至左调整结构
//    从两个儿子节点中选出较大的来与父亲节点进行比较
//    如果儿子节点比父亲节点大，则进行交换
void creatheap(int *a,int i,int n)
{
	for(;i>=0;--i)
	{
		int left = i*2 + 1;  //左子树结点  
		int right = i*2 + 2; //右子树结点
		int j =0;
		if(right < n)
		{
			a[left]>a[right] ? j=left : j = right;
		}
		else
			j=left;
		if(a[j] >a[i])
		{
			int temp = a[i];
			a[i] = a[j];
			a[j] =temp;
		}
	}
}
