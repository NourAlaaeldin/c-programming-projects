/*
 * Q25.c
 *
 *  Created on: Nov 18, 2019
 *      Author: Nour
 */

/*
 * 25- Write c function to reverse bits in a 8 bit number
 * ( 149->10010101 return 169->10101001).
 */

#include <stdio.h>

unsigned char reverse_binary(unsigned char num);

int
main(void)
{
	unsigned char ans = reverse_binary(149);
	printf("%d",ans);
}

unsigned char
reverse_binary(unsigned char num)
{
	unsigned char reverse_num = 0;

	for(int i = 0;i < 8;i++)
	{
    	/* check if this bit is equals to one */
        if(num & (1 << i))
            reverse_num |= (1 << ((8 - 1) - i));
	}
	return reverse_num;
}
