/*
 * main.c
 *
 *  Created on: Dec 19, 2019
 *      Author: Nour
 */

#include <stdio.h>
#include "Binary_Search.h"

int
main(void)
{
	int index,count;
	int B[] = {2,4,10,10,10,18,20};

	index = BinarySearch(B,7,10);
	if(index == -1)
		printf("The element is not found!\n");
	else
		printf("The element is found at index %d\n",index);

	index = BinarySearchFindFirst(B,7,10);
	if(index == -1)
		printf("The element is not found!\n");
	else
		printf("The element is found at index %d\n",index);

	index = BinarySearchFindLast(B,7,10);
	if(index == -1)
		printf("The element is not found!\n");
	else
		printf("The element is found at index %d\n",index);

	count = BinarySearchFindCount(B,7,10);
	printf("The number of elements are: %d\n",count);

	int A[] = {15,22,23,28,31,38,5,6,8,10,12};
	count = BinarySearchFindRotationCount(A,11);
	printf("The array is rotated %d times\n",count);
	index = BinaryCircularArraySearch(A,11,10);
	if(index == -1)
		printf("The element is not found!\n");
	else
		printf("The element is found at index %d\n",index);


	return 0;
}
