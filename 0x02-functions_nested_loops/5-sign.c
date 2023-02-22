#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: is the parameter of the function
 * Return: 1 when postive 0 when 0 and -1 when negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
