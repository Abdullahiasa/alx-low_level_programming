#include <stdio.h>

/**
 * main - prints all single
 * digit numbers of base 10 when invoked
 * Return: 0 is success 1 is error
 */

int main(void)
{
	int numb = 0;

	while (numb < 10)
	{
		printf("%d", numb);
		numb++;
	}

	printf("\n");

	return (0);
}
