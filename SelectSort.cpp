#include <iostream>
#include "SelectSort.h"

void selectsort(int *a ,int n)
{
	for (int i = 0; i < n; i++)
	{
		int key = i;  //��ʱ���������洢��С�ı���
		for (int j = i+1; j < n; j++)
		{
			if(a[j]<a[key])
				key =j; //�������ҵ���С����ֵ
		}
	    if(key !=i)
	    {
			int temp = a[key];
			a[key] = a[i];
			a[i] =temp;
	    }
	}
}

//���ж���������ѡ�����ֵ���������
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

//����������Ѷ���iΪ��ǰ�ڵ㣬nΪ�ѵĴ�С
//    �ӵ�һ����Ҷ�ӽ��i�������ϣ�������������ṹ
//    ���������ӽڵ���ѡ���ϴ�����븸�׽ڵ���бȽ�
//    ������ӽڵ�ȸ��׽ڵ������н���
void creatheap(int *a,int i,int n)
{
	for(;i>=0;--i)
	{
		int left = i*2 + 1;  //���������  
		int right = i*2 + 2; //���������
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
