/**
 * reverse_array - reverses an array
 * @a: the array to reverse
 * @n: the length of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *end = a + (n - 1);
	int tmp = 0;

	while (a < end)
	{
		tmp = *a;
		*a = *end;
		*end = tmp;
		a++;
		end--;
	}
}

