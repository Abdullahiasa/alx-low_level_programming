#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the main string.
 * @needle: substring.
 * Return: when 1 it an error
 * NULL if not found.
*/

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*haystack != '\0' && *b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return (a);
		haystack = a + 1;
	}
	return (0);
}
