#include <stdio.h>

/**
 * int_index - function that searches for an integer
 *@array: our array goes here
 *@size: array size
 *@cmp: points to the function
 * Return: returns 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, count;

	count = 0;
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				count++;
				return (i);
			}
		}
	}
	if (size <= 0 || count == 0)
		return (-1);
	else
		return (0);
}
