#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 time
 */

void print_alphabet_x10(void)
{
	int time = 0;
	char alpx10 = 'a';

	while (time < 10)
	{
		for (alpx10 = 'a'; alpx10 <= 'z'; alpx10++)
		{
			_putchar(alpx10)
		}
		_putchar('\n');
		time++;
	}
}
