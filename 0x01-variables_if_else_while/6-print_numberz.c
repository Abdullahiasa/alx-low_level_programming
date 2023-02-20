#include <stdio.h>

/**
 * main - this prints numbers
 * from 0 to 9 when invoked
 * Return: 0 is success 1 is error
 */

int main(void)
{
	int numb = 0;

	while (numb < 10)
	{
		putchar(numb);
		numb++;
	};
	putchar('\n');
}
