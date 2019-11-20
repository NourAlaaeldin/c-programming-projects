/*
 * Q24.c
 *
 *  Created on: Nov 18, 2019
 *      Author: Nour
 */

/*
 * 24- Write c function to take 2 arrays and
 * return an array by merging them like this
 * ( arr1={1,2,3,4,5},arr2={11,12,13,14,15}
 * return arr3={1,11,2,12,3,13,4,14,5,15} ).
 */

#include <stdio.h>

void merge_arrays(int *A,int *B, int size1,int size2);

int
main(void)
{
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={11,12,13,14,15};

	merge_arrays(arr1,arr2,5,5);

	return 0;
}

void
merge_arrays(int *A,int *B, int size1,int size2)
{
	const int size = size1 + size2;
	int C[size];
	int count = 0;
	int j = 0,k = 0;

	for(int i = 0;i < size;i++)
	{
		if(count == 0)
		{
			*(C + i) = A[j];
			count++,j++;
		}
		else if(count == 1)
		{
			*(C + i) = B[k];
			count = 0,k++;
		}
	}

	for(int i = 0;i < size;i++)
	{
		printf("C[%d] = %d\n",i,C[i]);
	}
}
