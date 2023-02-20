#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *this program gets a random
 *value n everytime it execute
 *when > zero print positive etc
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
