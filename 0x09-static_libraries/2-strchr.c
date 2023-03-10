#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: the string with which the given chracter is located
 * @c: the character say c
 * Return: returns pointer s but otherwise null
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
		return ('\0');
}
