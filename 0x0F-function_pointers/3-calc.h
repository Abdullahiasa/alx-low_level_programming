#ifndef PRO3
#define PRO3

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int add(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
int divi(int a, int b);
int remi(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
