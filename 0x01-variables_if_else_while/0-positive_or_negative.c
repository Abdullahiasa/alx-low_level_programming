#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - this asigns random nuber, when it is invoked
 *value n chages to random numb
 *Return: when it's successful it is 0 
 *when it is 1 it's am erro
 */

/*the main functions return the value of n*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
	/*this return the value of n*/
}
