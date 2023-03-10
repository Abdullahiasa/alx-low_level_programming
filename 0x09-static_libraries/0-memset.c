#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: this is the memory location
 * @b: is the constant byte
 * @n: fills the bytes
 * Return: returns s which is a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
