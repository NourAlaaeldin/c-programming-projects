/*
 * Q4.c
 *
 *  Created on: Nov 12, 2019
 *      Author: Nour
 */

/*
 * 4- Write c function to take a number and get the nearest 10th number
 * (number 73 return 70 ,number 78 return 80).
 */

#include <stdio.h>

int get_nearest_10(int num);

int
main(void)
{
	int res = get_nearest_10(37);
	printf("%d",res);
}

int
get_nearest_10(int num)
{
	num = num - num % 10;
	return num;
}
