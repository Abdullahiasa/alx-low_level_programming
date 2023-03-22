#include <stdio.h>

/**
 * array_iterator - executes a function as a parameter of each element of array
 *@array: the array goes here
 *@size: array size
 *@action: pointers to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
