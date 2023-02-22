#include "main.h"
/**
 * _isalpha - checks if c is caps or not
 * @c: is a parameter in function _isalpha
 * Return: 1 when is caps other wise it's 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
