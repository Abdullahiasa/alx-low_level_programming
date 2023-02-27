#include "main.h"

/**
 * swap_int - swaps a and b
 * @a: first parametr pointer
 * @b: second paramter pointer
 */

void swap_int(int *a, int *b)
{
	int copy = *a;
	*a = *b;
	*b = copy;
}
