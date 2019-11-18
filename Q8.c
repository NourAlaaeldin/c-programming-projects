/*
 * Q8.c
 *
 *  Created on: Nov 17, 2019
 *      Author: Nour
 */

/*
 * 8- Write c function to count number of ones in the binary representation of a
number ( 10-> 1010 return 2) try to optimize your code
 */

#include <stdio.h>

int binary_calculation(int num);

int
main(void)
{
	int res = binary_calculation(7);
	printf("%d",res);
	return 0;
}

int
binary_calculation(int num)
{
	int mask = 0x80000000;
	int count = 0;
	for(int i = 0;i < 32;i++)
	{
		if((num << i) & mask)
		{
			count++;
		}
	}
	return count;
}
