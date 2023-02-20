#include <stdio.h>
/**
 * main - prints all the numbers
 * of base 16 in lowercase when invoked
 * Return: 0 is success 1 is error
 */

int main(void)
{
	int base = 0;

	while (base < 10)
	{
		putchar(base + '0');
		base++;
	}

	base = 0;
	while (base < 6)
	{
		putchar(base + 'a');
		base++;
	}

	putchar('\n');
	return (0);


}
