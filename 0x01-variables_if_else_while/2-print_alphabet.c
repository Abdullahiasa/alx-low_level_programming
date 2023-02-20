#include <stdio.h>

/**
 *main - prints a-z when invoked,
 *a new line is added at the end
 *Return: 0 is success 1 is error 
 */
int main(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	putchar('\n');
	return(0);
}
