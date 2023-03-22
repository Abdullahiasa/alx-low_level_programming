#include <stdlib.h>

/**
 * print_name - function that prints a name
 *@name: put name
 *@f:pointers to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
