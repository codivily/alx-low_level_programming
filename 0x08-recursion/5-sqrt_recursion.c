
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: An integer
 *
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	int sum = 0;

	if (n < 1)
		return (1);	

	sum = 2 * _sqrt_recursion(n - 1);

	if (sum > n)
		return (-1);	

	return (n);
}
