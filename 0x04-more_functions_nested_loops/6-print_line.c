#include "main.h"

/**
 *print_line - drwas a straight line in the terminal
 *@n: is the parameter that tells how many times the line
 *should be printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
