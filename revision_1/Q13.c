/*
 * Q13.c
 *
 *  Created on: Nov 17, 2019
 *      Author: Nour
 */

/*
 * 13- Write c function to find a number in a sorted array
 * (try to optimize your code).
 */

#include <stdio.h>

int find_element(int * A,int size,int element);

int
main(void)
{
	int A[5] = {1,2,3,4,5};
	int index = find_element(A,5,3);
	printf("%d",index);
	return 0;
}

int
find_element(int * A,int size,int element)
{
	for(int i = 0;i < size;i++)
	{
		if(A[i] == element)
			return i;
	}
}
