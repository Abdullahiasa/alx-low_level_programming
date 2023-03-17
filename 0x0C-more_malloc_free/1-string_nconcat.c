#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: bytes
 * Return: allocated new space in memory else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strnew = NULL;
	unsigned int i, a, b, j, count, word;

	count = 0;
	word = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	if (n >= b)
	{
		word = b;

	} else
	{
		for (b = 0; b < n; b++)
			word++;
	}
	strnew = (char *)malloc((a + b + 1) * sizeof(char));
	if (strnew == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		strnew[i] = s1[i];
	for (j = 0; j < word; i++)
	{
		strnew[i] = s2[count];
		count++;
		j++;
	}
	strnew[i] = '\0';
	return (strnew);
}
