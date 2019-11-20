/*
 * Q23.c
 *
 *  Created on: Nov 19, 2019
 *      Author: Nour
 */

/*
 * 23- Write c function to find the most repeated number in an array of char
 * (size of the array is very large ) try to optimize your code .
 */

#include <stdio.h>

int most_repeated_number(int *A,int size);

int
main(void)
{
	int A[20] = {1,2,3,4,1,1,1,2,2,2,4,7,8,2,1,2,6,2,1,2};
	int res = most_repeated_number(A,20);
	printf("%d",res);
	return 0;
}

int
most_repeated_number(int *A,int size)
{
	int count = 1,longest_count = 1;
	for(int i = 0;i < size;i++)
	{
		for(int j = i + 1;j < size;j++)
		{
			if(A[i] == A[j])
			{
				count++;
				if(longest_count < count)
					longest_count = count;
			}
		}
		count = 1;
	}
	return longest_count;
}
