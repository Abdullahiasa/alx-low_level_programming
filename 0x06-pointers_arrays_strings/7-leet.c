#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: pointer to string.
 * Return: returns pointer s.
 */

char *leet(char *s)
{

	int strlen, counts;
	char alp[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	/*  scan through string */
	strlen = 0;
	while (s[strlen] != '\0')
		/* check whether leetLetter is found */
	{
		counts = 0;
		while (counts < 10)
		{
			if (alp[counts] == s[strlen])
			{
				s[strlen] = nums[counts];
			}
			counts++;
		}
		strlen++;
	}
	return (s);
}
