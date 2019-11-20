/*
 * Q18.c
 *
 *  Created on: Nov 12, 2019
 *      Author: Nour
 */

/*
 * 18- Write c function to take an array
 * (with unknown size) contain 2 zeros swap the 3 element after the
 * first zero with the 3 element after the second zero
 * ( x,x,x,0,1,2,3,xxxx,0,5,6,7,xxxx ->swap 1,2,3with 5,6,7).
 */

#include <stdio.h>

void Array_config(int *A);

int
main(void)
{
	int A[8] = {0,1,2,3,0,4,5,6};
	Array_config(A);
	for(int i = 0;i < 8;i++)
	{
		printf("%d\t",A[i]);
	}
}

void Array_config(int *A)
{
	int i = 0,count = 0;
	int index_1,index_2;
	int temp;

	while(1)
	{
		if(A[i] == 0)
		{
			count++;
			if(count == 1)
				index_1 = i;
			else if(count == 2)
			{
				index_2 = i;
				break;
			}
		}
		i++;
	}
	for(int i = 0;i < 3;i++)
	{
		temp = A[index_1 + i + 1];
		A[index_1 + i + 1] = A[index_2 + i + 1];
		A[index_2 + i + 1] = temp;
	}
}
