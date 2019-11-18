/*
 * Q14.c
 *
 *  Created on: Nov 12, 2019
 *      Author: Nour
 */

/*
 * 14-C function to return the maximum and minimum number in an array and there index
 * (try 3 different way to return more than one variable from function).
 */

#include <stdio.h>

int * manipulate_array(int *A,int size);

int
main(void)
{
	int A[5] = {1,2,3,4,5};
	int * b_ptr = manipulate_array(A,5);
	for(int i = 0;i < 4;i++)
	{
		printf("%d\n",*(b_ptr+i));
	}

}

int *
manipulate_array(int *A,int size)
{
	static int ans[4];
	//int min,index_min,max,index_max;

	//min = A[0]
	ans[0] = A[0];
	for(int i = 1;i < size;i++)
	{
		if(A[i] < ans[0])
		{
			ans[0] = A[i];
			//index_min = i
			ans[1] = i;
		}
	}

	//max = A[0]
	ans[2] = A[0];
	for(int i = 1;i < size;i++)
	{
		if(A[i] > ans[0])
		{
			ans[2] = A[i];
			//index_max = i
			ans[3] = i;
		}
	}

	return ans;
}
