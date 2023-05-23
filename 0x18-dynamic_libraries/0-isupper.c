#include "main.h"

/**
 * _isupper - checks uppercase letter
 * @c: is a parameter
 * Return: 1 when true 0 when false
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
