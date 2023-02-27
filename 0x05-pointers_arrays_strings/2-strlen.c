#include "main.h"

/**
 * _strlen - returns length of the string
 * @s: is the parameter
 * Return: returns length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
