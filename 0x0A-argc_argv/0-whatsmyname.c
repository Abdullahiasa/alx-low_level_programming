#include <stdio.h>
#include <string.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: represents number of comman passed.
 * @argv: represent command line argm passed .
 * Return: suucess = 0; otherwise its failure.
 */

int main(int argc, char *argv[]) {

    char *program_name = strrchr(argv[0], '/');
    if (program_name == NULL) 
    {
        program_name = argv[0];
    } 
    else 
    {
        program_name++;
    }

    printf("%s\n", program_name);

    return 0;
}
