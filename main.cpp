#include <iostream>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "InsertSort.h"
#include "SelectSort.h"
#include "MergeSort.h"

using namespace std;

int main()
{

	int arr[] = {10,6,5,2,3,8,7,4,9,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	for(int i = 0; i < n ; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	
	bubblesort(arr, n);
	/*
	���ʱ�临�Ӷ�ΪO(n^2)��
	ƽ��ʱ�临�Ӷ�ΪO(n^2)��
	�ȶ��ԣ��ȶ���
	�����ռ�O(1)
	*/
	superbubblesort(arr,n);
	/*
	��������ȴ�ͳð�����������Ժ�
	*/
	quicksort(arr,0,n-1);
	/*
	���ʱ�临�Ӷȣ�O(n^2)��
	����ʱ�临�Ӷȣ�O(nlogn)��
	ƽ��ʱ�临�Ӷȣ�O(nlogn)��
	�ȶ��ԣ����ȶ��ģ�
	�����ռ䣺O(nlogn)
	*/
	insertsort(arr,n);
	/*
	���ʱ�临�Ӷȣ�O(n^2)��
	����ʱ�临�Ӷȣ�O(n)��
	ƽ��ʱ�临�Ӷȣ�O(n^2)��
	�ȶ��ԣ��ȶ���
	�����ռ䣺O(1)
	*/
	shellsort(arr,n);
	/*
	���ʱ�临�Ӷȣ�O(n^2)��
	����ʱ�临�Ӷȣ�O(n)��
	ƽ��ʱ�临�Ӷȣ�O(n^1.3)��
	�ȶ��ԣ����ȶ��ģ�
	�����ռ䣺O(1)
	*/
	selectsort(arr,n);
	/*
	���ʱ�临�Ӷȣ�O(n^2)��
	����ʱ�临�Ӷȣ�O(n^2)��
	ƽ��ʱ�临�Ӷȣ�O(n^2)��
	�ȶ��ԣ����ȶ��ģ�
	�����ռ䣺O(1)
	*/
	heapsort(arr,n);
	/*
	���ʱ�临�Ӷȣ�O(nlogn)��
	����ʱ�临�Ӷȣ�O(nlogn)��
	ƽ��ʱ�临�Ӷȣ�O(nlogn)��
	�ȶ��ԣ����ȶ��ģ�
	�����ռ䣺O(1)
	*/
	mergesort(arr,0,n-1);
	/*
	���ʱ�临�Ӷȣ�O(nlogn)��
	����ʱ�临�Ӷȣ�O(nlogn)��
	ƽ��ʱ�临�Ӷȣ�O(nlogn)��
	�ȶ��ԣ����ȶ��ģ�
	�����ռ䣺O(n)
	*/

	for(int i = 0; i < n ; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
        return 0;
}
