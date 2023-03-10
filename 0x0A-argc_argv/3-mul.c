#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the number of arguments passed into it.
 * @argc: represents number of comman passed.
 * @argv: represent command line argm passed .
 * Return: suucess = 0; otherwise its failure.
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
