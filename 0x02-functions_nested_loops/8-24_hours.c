#include "main.h"
/**
 * jack)bauer - shows the time 
 * @hr: is a parameter
 * @min is a parameter
 */

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0;  hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar((':'))
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');	
		}
	}
}
