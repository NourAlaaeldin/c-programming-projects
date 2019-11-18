/*
 * Q1.c
 *
 *  Created on: Nov 17, 2019
 *      Author: Nour
 */

/*
 * 1- Write c function to take an integer number and calculate its square root.
 */

#include <stdio.h>
#include <math.h>

int square_root(int num);

int
main(void)
{
	int ans = square_root(4);
	printf("Ans = %d",ans);
	return 0;
}

int
square_root(int num)
{
	int res = sqrt(num);
	return res;
}
