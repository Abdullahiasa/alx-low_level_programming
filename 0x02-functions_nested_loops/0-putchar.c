#include <unistd.h>
/**
 * pt -writes character c to stout
 * @c: The character to print
 * Return: 0 is success, 1 is error
 */

int pt(char c)
{
	return (write(1, &c, 1));
}
