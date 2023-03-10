#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: represents number of comman passed.
 * @argv: represent command line argm passed .
 * Return: suucess = 0; otherwise its failure.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
