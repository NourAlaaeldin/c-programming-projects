/*
 * Q11.c
 *
 *  Created on: Nov 12, 2019
 *      Author: Nour
 */

/*
 * 11- Write c function to sum numbers from 1 to 100 (without loop).
 */

#include <stdio.h>

int sum_numbers(void)
{
	static int num = 1;
	static int sum = 0;
	sum += num;
	num++;
	if(num == 101)
		return sum;
	sum = sum_numbers();
}
int
main(void)
{
	int res = sum_numbers();
	printf("%d\n",res);
}
