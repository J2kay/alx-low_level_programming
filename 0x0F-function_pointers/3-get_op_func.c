#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - retrieves the correct
 *   fuction for the operation.
 * @s: pass operator as arguement.
 *
 * Return: a pointer to the right function
 *   needed for the operation.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int n = 0;

	while (ops[n].op != NULL && *(ops[n].op) != *s)
		n++;
	if (s == NULL)
		return (NULL);
	return (ops[n].f);
}
