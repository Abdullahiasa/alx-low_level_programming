#include <stdio.h>

/**
 *main - prints alphabet in
 *upper and lower case
 *Return: 0 is success 1 is error
 */

int main(void)
{
	int alphABET;

	for (alphABET = 'a'; alphABET <= 'z'; alphABET++)
	       putchar(alphABET);

	for (alphABET = 'A'; alphABET <= 'Z'; alphABET++)
		putchar(alphABET);

	putchar('\n');
	return (0);	
}
