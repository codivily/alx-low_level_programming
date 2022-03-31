
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: An integer
 *
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	int k = 0;
	int sum = 0;

	while (sum < n)
	{
		k += 1;
		sum += 2 * k - 1;
	}

	if (sum > n)
		return (-1);

	return (k);
}
