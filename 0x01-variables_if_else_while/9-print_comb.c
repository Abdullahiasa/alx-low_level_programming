#include <stdio.h>

/**
 * main - prints all possible combinations of
 * single-digit numbers separated by ", "
 * Return: 0 on success
 */

int main(void)
{
	int numb;

	for (numb = 10; numb < 10; numb++)
	{
		putchar(numb);
		if (numb != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
