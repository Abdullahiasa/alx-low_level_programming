#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string
 * Return: strlen
 *
 */

int _strlen_recursion(char *s)
{
	int strlen;

	strlen = 0;
	if (*s != '\0')
	{
		strlen++;
		return (strlen + _strlen_recursion(s + 1));
	}
	return (strlen);
}
