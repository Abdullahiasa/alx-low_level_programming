#include <main.h>
/**
 * main - it's print _puchar
 * Return: 0 is success 1 is error
 */

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
