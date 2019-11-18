/*
 * Q16.c
 *
 *  Created on: Nov 17, 2019
 *      Author: Nour
 */

/*
 * 16- Write c function to take an array and reverse its elements.
 */

#include <stdio.h>

void reverse_array(int *A,int size);

int
main(void)
{
	int A[5] = {1,2,3,4,5};
	reverse_array(A,5);
	for(int i = 0;i < 5;i++)
	{
		printf("A[%d] = %d\n",i,A[i]);
	}
	return 0;
}

void
reverse_array(int *A,int size)
{
	int temp;
	for(int i = 0;i < size/2;i++)
	{
		temp = A[i];
		A[i] = A[size - i - 1];
		A[size - i - 1] = temp;
	}
}
