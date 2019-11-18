/*
 * 4.c
 *
 *  Created on: Nov 17, 2019
 *      Author: Nour
 */

#include <stdio.h>

int
main(void)
{
	for(int i = 0;i <= 3;i++)
	{
		for(int j = 0;j <= 6;j++)
		{
			if(j <= 3 + i && j >= 3 - i)
				printf("*");
			else
				printf(" ");
		}
	printf("\n");
	}
	return 0;
}
