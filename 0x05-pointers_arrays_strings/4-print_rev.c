#include "main.h"
#include <string.h>

/**
 * print_rev - reverses a string
 * @s: paramter pointer
 */

void print_rev(char *s)
{
	int strlen, end;

	strlen = 0;

	while (s[strlen] != '\0')
	{
		strlen++;
	}

	end = strlen - 1;

	for (; end >= 0; end--)
	{
		_putchar(s[end]);
	}

	_putchar('\n');
}
