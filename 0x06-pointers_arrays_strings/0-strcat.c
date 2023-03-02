#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer parameter.
 * @src: pointer parameter.
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int strlen, i;

	strlen = 0;

	while (dest[strlen] != '\0')
	{
		strlen++;
	}

	for (i = 0; src[i] != '\0'; i++, strlen++)
	{
		dest[strlen] = src[i];
	}

	dest[strlen] = '\0';

	return (dest);
}
