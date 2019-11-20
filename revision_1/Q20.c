/*
 * Q20.c
 *
 *  Created on: Nov 19, 2019
 *      Author: Nour
 */

/*
 * 20- Write c function to take an string and reverse words
 * (My name is Mohamed Ali->Ali Mohamed is name my) try it without use external arrays.
 */

#include <stdio.h>

void
reverse_words(char * input)
{
	char output[50];
	int i = 0,j = 0;

	while(input[i] != '\0')
		i++;

	while(i > 0)
		output[j++] = input[--i];

	output[j] = '\0';

	for(i = 0;output[i] != '\0';i++)
	{
		if(output[i + 1] == ' ' || output[i + 1] == '\0')
		{
			for(j = i;j >= 0 && output[j] != ' ';j--)
				printf("%c",output[j]);
			printf(" ");
		}
	}
}

int
main(void)
{
	char * A = "My name is Mohamed Ali";
	reverse_words(A);
	return 0;
}
