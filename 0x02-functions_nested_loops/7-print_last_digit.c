#include "main.h"

/**
 * print_last_digit - this prints the last digit of an integer
 * @numb: is a parameter
 * Return: returns last_digit
 */

int print_last_digit(int numb)
{
	int last_digit = numb % 10;

	if (numb < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
