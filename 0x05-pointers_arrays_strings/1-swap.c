#include "main.h"

/***/

void swap_int(int *a, int *b)
{
	int copy = *a;
	*a = *b;
	*b = copy;
}
