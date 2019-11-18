/*
 * Q2.c
 *
 *  Created on: Nov 17, 2019
 *      Author: Nour
 */

/*
 * 2- Write c function to check Whether a Number is Prime or Not.
 */

#include <stdio.h>

int prime_or_not(int num);

int
main(void)
{
	int res = prime_or_not(7);
	if(res == 0)
		printf("This number is not prime\n");
	else
		printf("This number is prime\n");
	return 0;
}

int
prime_or_not(int num)
{
	int ans = 1;
	for(int i = 2;i <= num/2;i++)
	{
		if(num % i == 0)
			ans = 0; /* not prime */
	}
	return ans; /* prime */
}
