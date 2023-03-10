#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: is a parameter
 * Return: 1 when true 0 when false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
