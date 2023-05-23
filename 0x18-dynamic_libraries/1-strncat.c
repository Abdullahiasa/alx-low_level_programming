#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer parameter.
 * @src: pointer parameter.
 * @n: bytes to conca string.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int strlen, i;

	strlen = 0;

	while (dest[strlen] != '\0')
	{
		strlen++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++, strlen++)
	{
		dest[strlen] = src[i];
	}

	dest[strlen] = '\0';

	return (dest);
}

