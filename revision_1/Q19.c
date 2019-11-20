/*
 * Q19.c
 *
 *  Created on: Nov 14, 2019
 *      Author: Nour
 */

/*
 * 19- Write c function to take an string and return the longest word
 * (My name is Mohamed Ali -> return Mohamed) .
 */

#include <stdio.h>

char * longest_word(char * p_str);

int
main(void)
{
	int i = 0;
	char Name[] = "My name is Mohamed Ali";
	char * ans = longest_word(Name);

	while(ans[i] != '\0')
	{
		printf("%c",ans[i]);
		i++;
	}
	return 0;
}

char *
longest_word(char * p_str)
{
	static char long_str[100];
	int i = 0,k = 0;
	int count = 0,pos = 0;
	int longest_count = 0;

	while(p_str[i] != '\0')
	{
		count++;
		if(p_str[i] == ' ' || p_str[i] == '\0')
		{
			if(longest_count < count)
			{
				longest_count = count;
				pos = i - longest_count + 1;
			}
			count = 0;
		}
		i++;
	}

	for(int j = pos;j < (longest_count + pos);j++)
		long_str[k++] = p_str[j];

	return long_str;
}
