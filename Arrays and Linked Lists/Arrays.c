/*
 * Arrays.c
 *
 *  Created on: Aug 2, 2019
 *      Author: Nour
 */

#include "Arrays.h"

void
InsertAtFirst_Array(int data,int *A,int *size)
{
	/*
	 * we loop from the back of the array so that we don't overwrite array elements
	 * we want to shift array elements right
	 */

	for(int i = (*size) - 1;i >= 0;i--)
	{
		A[i+1] = A[i];
	}

	/* element is inserted at the front */
	A[0] = data;

	/* array size is increased by one */
	(*size)++;
}

void
InsertAtLast_Array(int data,int *A,int *size)
{
	/* element is inserted at the back */
	A[(*size)] = data;

	/* array size is increased by one */
	(*size)++;
}

void
Insert_Array(int position,int data,int *A,int *size)
{
	if(position > *size)
	{
		printf("You entered a wrong position\n");
		return;
	}

	/*
	 * we loop from the back of the array so that we don't overwrite array elements
	 * we want to shift array elements right
	 */

	/* loop until we reach the element above the desired position */
	for(int i = (*size) - 1;i >= position;i--)
	{
		A[i+1] = A[i];
	}

	/* insert the element in the desired position */
	A[position] = data;

	/* array size is increased by one */
	(*size)++;
}

void
ElementSearchFirst_Array(int *A,int size,int element)
{
	if(size == 0)
	{
		printf("There is no array elements\n");
		return;
	}

	/* loop through the whole array */
	for(int i = 0;i < size;i++)
	{
		if(element == A[i])
		{
			printf("Element %d is found at index: %d\n",element,i);
			return;
		}
	}
	/* the code get here if there is no match */
	printf("There is no match\n");
}

void
PrintList_Array(int *A,int size)
{
	if(size == 0)
	{
		printf("There is no array elements\n");
		return;
	}

	printf("Printing the Array\n");

	/* loop through the whole array */
	for(int i = 0;i < size;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}

void
Reverse_Array(int *A,int size)
{
	if(size == 0)
	{
		printf("There is no array elements\n");
		return;
	}

	printf("Reversing the Array\n");

	/* swapping the array element */
	for(int i = 0;i < size / 2;i++)
	{
		int temp = A[size - (i + 1)];
		A[size - (i + 1)] = A[i];
		A[i] = temp;
	}
}

void
DeletePosition_Array(int position,int *A,int *size)
{
	if(*size == 0)
	{
		printf("There is no array elements\n");
		return;
	}

	if(position > *size)
	{
		printf("You entered a wrong position\n");
		return;
	}

	printf("Deleting the element at position: %d\n",position);

	if(position == 0)
	{
		/*
		 * we loop from the front of the array so that we don't overwrite array elements
		 * we want to shift array elements left
		 */
		for(int i = 1;i < *size;i++)
		{
			A[i - 1] = A[i];
		}

		/* array size is decreased by one */
		(*size)--;

		/* exit the function */
		return;
	}

	/*
	 * we loop from the front of the array so that we don't overwrite array elements
	 * we want to shift array elements left
	 */
	for(int i = position + 1;i < *size;i++)
	{
		A[i - 1] = A[i];
	}

	/* array size is decreased by one */
	(*size)--;
}
