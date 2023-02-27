#include "main.h"
/**
 * print_rev - reverse the string.
 * @s: pointwe parameter.
 */

void print_rev(char *s)
{
	int i, j;
	
	while (*s != '\0')
	{
		i++;
		s++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(*(s - j - 1));
	}

	_putchar('\n');

}
