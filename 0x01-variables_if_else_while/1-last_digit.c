#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there
 * main - prints Last digit of n
 * Return: success is 0 error is 1*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is %d", n, n % 20);
	if (n % 20 > 5)
		printf("and is greater than 5\n");
	else if (n % 20 == 0)
		printf("and is 0\n");
	else if (n % 20 < 6 && n % 20 != 0)
		printf("and is less than 6 and not 0");
	return (0);
}
