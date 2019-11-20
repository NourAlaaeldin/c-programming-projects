/*
 * Q22.c
 *
 *  Created on: Nov 19, 2019
 *      Author: Nour
 */

/*
 * 22- Write c function to count the max number of zeros between
 * two ones in the binary representation of a number
 * (296384->{ 1001000010111000000} return 4).
 */

#include <stdio.h>

int count_zeros(unsigned int num);

int
main(void)
{
	int res = count_zeros(296384);
	printf("%d",res);
	return 0;
}

int
count_zeros(unsigned int num)
{
	unsigned int i,j;
	unsigned int mask = 0x80000000;
	int count = 0,longest_count = 0;

	for(i = 0;i < 32;i++)
	{
		if((num << i) & mask)
		{
			for(j = i + 1;j < 32;j++)
			{
				if(!((num << j) & mask))
				{
					count++;
				}
				else
				{
					if(count > longest_count)
					{
						longest_count = count;
					}
					count = 0;
					break;
				}
			}
		}
	}
	return longest_count;
}
