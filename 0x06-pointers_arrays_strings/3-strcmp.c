#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer
 * @s2: pointer
 * Return: returns outp
 */

int _strcmp(char *s1, char *s2)
{
	int len, outp;

	len = 0;
	while (s1[len] == s2[len] && s1[len] != '\0')
	{
		len++;
	}

	outp = s1[len] - s2[len];

	return (outp);
}
