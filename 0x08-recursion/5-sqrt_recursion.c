#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: input num
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n <= 1)
	{
		return (n);
	}

	int low = 0;
	int high = n;
	int mid;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (mid * mid == n)
		{
			return (mid);
		}
		else if (mid * mid < n)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
