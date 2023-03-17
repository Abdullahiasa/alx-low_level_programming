#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 *@min: min
 *@max: max
 * Return: returns a pointer
 */
int *array_range(int min, int max)
{
	int *array = NULL;
	int i, t, count;

	count = 0;
	if (min > max)
		return (NULL);
	t = (max - min) + 1;
	array = malloc(t * sizeof(int));
	if (array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			array[count] = i;
			count++;
		}
		return (array);
	}
	return (NULL);
}
