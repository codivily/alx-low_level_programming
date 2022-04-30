
/**
 * binary_to_uint - converts a binary number to an unisnged int
 * @b: binary number string
 *
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;
	unsigned int digit = 0;
	unsigned int exp = 0;
	unsigned int exp_i = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}

	while (i-- > 0)
	{
		digit = b[i] - '0';
		exp_i = exp++;
		while (exp_i--)
			digit *= 2;
		n += digit;
	}

	return (n);
}

