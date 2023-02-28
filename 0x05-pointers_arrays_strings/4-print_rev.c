#include "main.h"
/**
 * print_rev - reverse the string.
 * @s: pointwe parameter.
 */

void print_rev(char *s)
{
	int i = 0;
	
	while (*s != '\0')
	{
		i++;
		s++;
	}

	char *pp = s + i - 1;

	for (; pp >= s; pp--)
	{
		_putchar(*pp);
	}

	_putchar('\n');

}
