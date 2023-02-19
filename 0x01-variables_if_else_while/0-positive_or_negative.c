#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * more headers goes there
 *this program gets a random
 * number everytime it execute
 * when > zero print positive
 * when equals zero prints zero 
 * and when < zero negative
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0)
		printf ("%d is positive\n", n);
	else if(n == 0)
		printf ("%d is zero\n", n);
	else if(n < 0)
		printf ("%d is negetive\n", n);
	return (0);
}
