#include "main.h"

/**
 * _abs - computes the absolute value of integer
 * @numb: is the paramter of _abs
 * Return: retuns the absolute value
 */

int _abs(int numb)
{
	if (numb < 0)
	{
		numb = numb * -1;
	}

	return (numb);
}
