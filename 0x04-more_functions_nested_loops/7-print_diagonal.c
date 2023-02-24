#include "main.h"
  
/**
 *print_diagonal - drwas a diagonal line in the terminal
 *@n: is the parameter that tells how many times the line
 *should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
