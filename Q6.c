/*
 * Q6.c
 *
 *  Created on: Nov 17, 2019
 *      Author: Nour
 */

/*
 * 6- Write c function to reverse digits in number (number 2371 return 1732).
 */

#include <stdio.h>
#include <math.h>

int reverse_num(int num);

int
main(void)
{
	int res;
	res = reverse_num(1234);
	printf("%d",res);
	return 0;
}

int
reverse_num(int num)
{
	int res = 0;
	while(num > 0)
	{
		res = res * 10 + num % 10;
		num = num / 10;
	}
	return res;
}
