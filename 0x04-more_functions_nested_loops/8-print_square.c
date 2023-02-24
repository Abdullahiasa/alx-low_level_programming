#include "main.h"

/**
 *print_square - prints square
 *@size: is the size of the square
 */

void print_square(int size)
{

	if (size <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n')
		}
	}
}
