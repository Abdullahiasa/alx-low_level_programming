#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 *@b: bytes
 * Return: returns pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
