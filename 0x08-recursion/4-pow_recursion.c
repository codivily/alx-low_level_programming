
/**
 * _pow_recursion - returns the value of x raised to to power of y
 * @x: An integer
 * @y: An integer
 *
 * Return: An interger power of x to y
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, (y - 1));
}
