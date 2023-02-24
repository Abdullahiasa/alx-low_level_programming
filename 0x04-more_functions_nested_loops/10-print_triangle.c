#include "main.h"

/**
 * print_triangle - print triangle
 * @size: parameter takes size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; i++)
		{
			if (j >= (size - (i + 1)))
			{
				_putchar('#');
			}
			else
			{
				_putchar(" ");
			}
		}
	}
}
