#include <stdio.h>

/**
 *main - prints alphebets
 *excluding q and e
 *Return: 0 is success, 1 is error
 */

int main(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		if (alp != 'q' && alp != 'e')
			putchar(alp);

	putchar('\n');

	return (0);
}
