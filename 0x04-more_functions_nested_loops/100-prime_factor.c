#include <stdio.h>



/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	long int n = 100;
	long int factor = n;
	long int divisor = 0;

	for (; factor > 1;)
	{
		factor = (factor % 2 == 0 ? 1 : 2);

		divisor = factor;

		while (1)
		{
			if (factor % divisor == 0)
				break;	
			divisor -= (divisor % 2 == 0 ? 1 : 2);
		}
		
		if (divisor == 1 && n % factor == 0)
			break;
	}
	
	printf("%ld\n", factor);

	return (0);
}
