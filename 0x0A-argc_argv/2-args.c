#include <stdio.h>
#include <stdlib.h>

/***/

int main(int argc, char *argv[]) {

    if (argc != 3) 
    {
        printf("Error\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int result = a * b;
    printf("%d\n", result);

    return 0;
}
