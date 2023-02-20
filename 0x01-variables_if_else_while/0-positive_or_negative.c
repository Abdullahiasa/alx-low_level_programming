#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - this asigns random number,
 *value n chages to random numb
 *Return: when it's successful 0 
 *when 1 it's am error
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
