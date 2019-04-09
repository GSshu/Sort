#include <iostream>
#include "InsertSort.h"

void insertsort(int *a ,int n)  //÷±Ω”≤Â»Î≈≈–Ú
{
	int temp =0;
	for (int i = 1; i < n; i++)
	{
		int j =i - 1;
		if(a[i]<a[j])
		{
		  temp = a[i];
		  a[i] = a[j];
		  while(temp <a[j-1])
		   {
			a[j] = a[j-1];
			j--;
		    }
		  a[j] = temp;
		}
	}
}

void shellsort(int *a ,int n) //œ£∂˚≈≈–Ú÷˜∫Ø ˝
{
	int dk =n/2;
	while (dk>1)
	{
		shellinsertsort(a , n , dk);
		dk /= 2;
	}
}

void shellinsertsort(int *a ,int n,int dk)
{
	for (int i = dk; i < n; i++)
	{
		int j = i-dk;
		if(a[i]<a[j])
		{
			int tmp = a[i];
			a[i] = a[j];
			while(a[j]>tmp)
			{
				a[j+dk] =a[j];
				j-=dk;
			}
			a[j+dk] = tmp;
		}
	}
}
