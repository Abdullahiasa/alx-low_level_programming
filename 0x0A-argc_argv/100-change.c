#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * changeCoin - the logic this does all the math
 * @i: input for calc
 * Return: returns the length
 */

int changeCoin(int i)
{
	int len = 0;

	while (i != 0)
	{
		if (i % 10 == 9 || i % 10 == 7)
			i -= 2;
		else if (i % 25 == 0)
			i -= 25;
		else if (i % 10 == 0)
			i -= 10;
		else if (i % 5 == 0)
			i -= 5;
		else if (i % 2 == 0)
		{
			if (i % 10 == 6)
				i -= 1;
			else
				i -= 2;
		}
		else
			i -= 1;

		len++;
	}

	return (len);
}

/**
 * main - prints the number of arguments passed into it.
 * @argc: represents number of comman passed.
 * @argv: represent command line argm passed .
 * Return: suucess = 0; otherwise its failure.
 */

int main(int argc, char *argv[])
{
	int i, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
		printf("0\n");
	else
	{
		coin = changeCoin(i);

		printf("%d\n", coin);
	}

	return (0);
}
