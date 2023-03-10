#include "main.h"
/**
 * _islower - checks weather c is lower case or upper
 * @c: is a parameter of the function _islower
 * Return: returns 1 if the condition is true
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
