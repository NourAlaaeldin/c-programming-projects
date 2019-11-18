/*
 * Q3.c
 *
 *  Created on: Nov 17, 2019
 *      Author: Nour
 */

/*
 * 3- Write c function to take 2 numbers and print all prime numbers between them.
 */

#include <stdio.h>

void print_prime(int num1,int num2);

int
main(void)
{
	print_prime(2,10);
	return 0;
}

void
print_prime(int num1,int num2)
{
	int flag = 0;
	for(int i = num1;i <= num2;i++)
	{
		for(int j = 2;j <= i/2;j++)
		{
			if(i % j == 0)
			{
				flag = 1; /* not prime */
				break;
			}
		}
		if(flag == 0) /* prime */
		{
			printf("%d\t",i);
		}
		else
		{
			flag = 0;
		}
	}
}
