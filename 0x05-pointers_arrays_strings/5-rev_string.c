#include "main.h"

/***/

void rev_string(char *s)
{
	int strlen = 0;
	int temp;

	while (s[strlen] != '\0')
	{
		strlen++;
	}

	int a = 0;
	int b = strlen - 1;

	for (int i = 0; i < strlen; i++)
	{
		temp = s[b];
		s[b] = s[a];
		s[a] = temp;

		a++;
		b++;
	}
}
