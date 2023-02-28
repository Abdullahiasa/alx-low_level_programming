#include "main.h"

/**
 * rev_string - reverses a string
 * @s: is a pointer
 */

void rev_string(char *s)
{
	int strlen = 0;
	int temp;
	int a = 0;
	int b;

	while (s[strlen] != '\0')
	{
		strlen++;
	}

	b = strlen - 1;

	while (a < b)
	{
		temp = s[b];
		s[b] = s[a];
		s[a] = temp;

		a++;
		b--;
	}
}
