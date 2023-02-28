#include "main.h"

/***/

void rev_string(char *s)
{
	int strlen = 0;
	char newVar;

	while (s[strlen] != '\0')
	{
		strlen++;
	}

	for (int i = 0; i < strlen; i++)
	{
		newVar = s[i];
		s[i] = s[strlen - i - 1];
		s[strlen - i - 1] = newVar;
	}
}
