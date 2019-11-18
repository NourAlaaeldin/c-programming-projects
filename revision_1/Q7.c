/*
 * Q7.c
 *
 *  Created on: Nov 12, 2019
 *      Author: Nour
 */

/*
 * 7- Write c function to check Whether the Number base is 2 or not
 * (numbers like1,2,4,8,16,32) try it in 4 different ways.
 */

#include <stdio.h>

int base_2(int num);

int
main(void)
{
	int ans = base_2(62);
	if(ans == 0)
	{
		printf("the number is not base 2");
	}
	else
	{
		printf("the number is base 2");
	}
}

int
base_2(int num)
{
	while(num > 1)
	{
		if(num % 2 != 0)
		{
			return 0;
		}
		num = num / 2;
	}
	return 1;
}
