/*
 * Q17.c
 *
 *  Created on: Nov 18, 2019
 *      Author: Nour
 */

/*
 * 17- Write c function to take 2 arrays and swap them ( 2 different size).
 */

#include <stdio.h>

void swap_arrays(int *A,int *B,int size1,int size2);

int
main(void)
{
	int A[3] = {1,2,3};
	int B[5] = {4,5,6,7,8};

	swap_arrays(A,B,3,5);
}

void
swap_arrays(int *A,int *B,int size1,int size2)
{
	int size;
	int temp;

	if(size1 > size2)
		size = size1;
	else if(size2 > size1)
		size = size2;

	for(int i = 0;i < size;i++)
	{
		temp = A[i];
		A[i] = B[i];
		B[i] = temp;
	}
	for(int i = 0;i < 5;i++)
	{
		printf("A[%d] = %d\n",i,A[i]);
	}
	for(int i = 0;i < 3;i++)
	{
		printf("B[%d] = %d\n",i,B[i]);
	}
}
