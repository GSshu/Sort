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
	最差时间复杂度为O(n^2)；
	平均时间复杂度为O(n^2)；
	稳定性：稳定；
	辅助空间O(1)
	*/
	superbubblesort(arr,n);
	/*
	这种排序比传统冒泡排序性能稍好
	*/
	quicksort(arr,0,n-1);
	/*
	最差时间复杂度：O(n^2)；
	最优时间复杂度：O(nlogn)；
	平均时间复杂度：O(nlogn)；
	稳定性：不稳定的；
	辅助空间：O(nlogn)
	*/
	insertsort(arr,n);
	/*
	最差时间复杂度：O(n^2)；
	最优时间复杂度：O(n)；
	平均时间复杂度：O(n^2)；
	稳定性：稳定；
	辅助空间：O(1)
	*/
	shellsort(arr,n);
	/*
	最差时间复杂度：O(n^2)；
	最优时间复杂度：O(n)；
	平均时间复杂度：O(n^1.3)；
	稳定性：不稳定的；
	辅助空间：O(1)
	*/
	selectsort(arr,n);
	/*
	最差时间复杂度：O(n^2)；
	最优时间复杂度：O(n^2)；
	平均时间复杂度：O(n^2)；
	稳定性：不稳定的；
	辅助空间：O(1)
	*/
	heapsort(arr,n);
	/*
	最差时间复杂度：O(nlogn)；
	最优时间复杂度：O(nlogn)；
	平均时间复杂度：O(nlogn)；
	稳定性：不稳定的；
	辅助空间：O(1)
	*/
	mergesort(arr,0,n-1);
	/*
	最差时间复杂度：O(nlogn)；
	最优时间复杂度：O(nlogn)；
	平均时间复杂度：O(nlogn)；
	稳定性：不稳定的；
	辅助空间：O(n)
	*/

	for(int i = 0; i < n ; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
        return 0;
}
