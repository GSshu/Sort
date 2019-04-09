#include "BubbleSort.h"

void bubblesort(int *arr,int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void superbubblesort(int *arr,int n)
{
	int left = 0, right = n-1;
	while(left <right)
	{
		for(int i = left; i<right;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int tempi = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tempi;
			}
		}
		right--;
		for (int j = right; j >left; j--)
		{
			if(arr[j]>arr[j+1])
			{
				int tempj = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tempj;
			}
		}
		left++;
	}
}