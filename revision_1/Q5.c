/*
 * Q5.c
 *
 *  Created on: Nov 17, 2019
 *      Author: Nour
 */

/*
 * 5- Write c function to take a number and sum all its digits
 * (number 126 , sum = 1+2+6).
 */

#include <stdio.h>

int sum_digits(int num);

int
main(void)
{
	int res = sum_digits(125);
	printf("%d",res);
	return 0;
}

int
sum_digits(int num)
{
	int sum = 0;
	while(num > 0)
	{
		sum = sum + (num % 10);
		num = num / 10;
	}
	return sum;
}
