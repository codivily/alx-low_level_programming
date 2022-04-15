#include "function_pointers.h"

/**
 * print_name - print names
 * @name: A string
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
