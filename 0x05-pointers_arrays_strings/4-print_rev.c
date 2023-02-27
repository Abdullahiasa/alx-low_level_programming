#include "main.h"
/**
 * print_rev - reverse the string.
 * @s: pointwe parameter.
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		length++;
	}

	j = i - 1;
	for (; j >= 0; j--)
	{

		_putchar(s[j]);
	}	
	_putchar('\n');
}
