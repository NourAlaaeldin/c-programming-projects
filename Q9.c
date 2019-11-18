/*
 * Q9.c
 *
 *  Created on: Nov 17, 2019
 *      Author: Nour
 */

/*
 * 9- Write c function to print the binary representation of a number try not to print
zeros on the left ( 5-> 101).
 */

#include <stdio.h>

void binary_representation(int num);

int
main(void)
{
	binary_representation(7);
	return 0;
}

void
binary_representation(int num)
{
	int mask = 0x80000000;
	for(int i = 0;i < 32;i++)
	{
		if((num << i) & mask)
			printf("1");
		else
			printf("0");
	}
}
