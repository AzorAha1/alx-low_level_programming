#ifndef CALC
#define CALC
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @fgeet: The function associated
 */
typedef struct op
{
	char *op;
	int (*fget)(int, int);
} op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
