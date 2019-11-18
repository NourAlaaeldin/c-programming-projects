/*
 * Q15.c
 *
 *  Created on: Nov 12, 2019
 *      Author: Nour
 */

/*
 * 15- Write c function to take 2 unsigned char and add them and return the result in unsigned char
 * (where is the problem and how to solve it).
 */

#include <stdio.h>

unsigned char calculate_sum(unsigned char a,unsigned char b);

int
main(void)
{
	unsigned char num1 = 0xFF;
	unsigned char num2 = 0xFF;
	unsigned char res = calculate_sum(num1,num2);
	printf("%x",res);
}

unsigned char
calculate_sum(unsigned char a,unsigned char b)
{
	unsigned char ans = a + b;
	if(ans < a || ans < b)
	{
		printf("An overflow occured!\n");
		return 0;
	}
	return ans;
}

