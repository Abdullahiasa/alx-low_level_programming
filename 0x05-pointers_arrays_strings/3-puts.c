#include "main.h"

/**
 * _puts - print srting to standsard output
 * @str: parameter
 */

void _puts(char *str)
{
	int put;

	while(*str != '\0')
	{
		_putchar(*str);
		str++;
		put++;
	}

	_putchar('\n');
}
