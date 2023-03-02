#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: pointer parameter.
 * @src: pointer parameter.
 * @n: bytes to be used.
 * Return: returns dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n && src[len] != '\0'; len++)
		dest[len] = src[len];
	for (; len < n; len++)
		dest[len] = '\0';

	return (dest);
}
