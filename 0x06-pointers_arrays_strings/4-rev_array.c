#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer.
 * @n: length of contents of array.
 */

void reverse_array(int *a, int n)
{
	int temp, len;

	n = n - 1;
	len = 0;

	while (len <= n)
	{
		temp = a[len];
		a[len++] = a[n];
		a[n--] = temp;
	}
}
