/*
 * Q12.c
 *
 *  Created on: Nov 17, 2019
 *      Author: Nour
 */

/*
 * 12- Write c function to calculate the factorial of number
 * (factorial of 5 is 5*4*3*2*1) try in 2 different way.
 */

#include <stdio.h>

int calculate_factorial(int num);

int
main(void)
{
	int res = calculate_factorial(5);
	printf("%d",res);
	return 0;
}

int
calculate_factorial(int num)
{
	int fact = 1;
	for(int i = 2;i <= num;i++)
	{
		fact = fact * i;
	}
	return fact;
}
