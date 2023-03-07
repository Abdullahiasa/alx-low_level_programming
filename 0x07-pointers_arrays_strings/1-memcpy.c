#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: saves the coppied memory area
 * @src: where the memory area is coppied from
 * @n: fills d byte
 * Return: returns pointer dest value*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
