

/**
 * swap_int - swaps the values of two integers
 * @a: A pointer to an integer
 * @b: A pointer to an integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
