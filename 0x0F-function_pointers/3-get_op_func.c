#include "3-calc.h"
#include <stddef.h>


/**
 * get_op_func - select an operation's function asked by the user
 * @s: the operator
 *
 * Return: A pointer to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (s != NULL && s[1] == '\0' && s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
