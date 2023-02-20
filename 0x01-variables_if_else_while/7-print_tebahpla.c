#include <stdio.h>

/**
 * main - prints the lowercase alphabet
 * in reverse when invoked
 * Return: 0 is success 1 is error
 */

int main(void)
{
	int alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}

	putchar('\n');

	return (0);
}
