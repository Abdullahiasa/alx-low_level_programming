#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer parameter.
 * @src: pointer parameter.
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	
	size_t length = strlen(dest);
	
	for (i = 0; src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	
	dest[length] = '\0';
	
	return (dest);
}
