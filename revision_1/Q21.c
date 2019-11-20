/*
 * Q21.c
 *
 *  Created on: Nov 18, 2019
 *      Author: Nour
 */

/*
 * 21- Write c function to take an array and
 * return the biggest difference between 2 numbers in the array
 * (the smaller number must come first in the array)
 * {10,1,5,3,6,8,7,2}->return 7 difference between 1,8.
 */

#include <stdio.h>
#include <math.h>

int get_biggest_difference(int *A,int size);

int
main(void)
{
	int A[8] = {2,1,5,3,6,8,7,2};
	int res = get_biggest_difference(A,8);
	printf("%d",res);
	return 0;
}

int
get_biggest_difference(int *A,int size)
{
	int max_diff = 0,diff;
	for(int i = 0;i < size;i++)
	{
		for(int j = i + 1;j < size;j++)
		{
			diff = abs(A[i] - A[j]);
			if(max_diff < diff)
				max_diff = diff;
		}
	}
	return max_diff;
}
