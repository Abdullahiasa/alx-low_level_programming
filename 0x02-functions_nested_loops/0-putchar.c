#include <unistd.h>
/**
 * _putchar -writes character c to stout
 * main - call the function _putchar
 * @c: The character to print
 * Return: 0 is success, 1 is error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
    char str[] = "_putchar\n";
    int i = 0;

    while (str[i] != '\0') {
        _putchar(str[i]);
        i++;
    }

    return (0);
}
