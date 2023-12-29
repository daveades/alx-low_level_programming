/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* Base cases */
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);

	/* Check if n is divisible by any number from 2 to sqrt(n) */
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function to check if a number is prime.
 * @n: The number to be checked.
 * @i: The divisor to check divisibility with.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
	/* Base case */
	if (i * i > n)
		return (1);

	/* Check if n is divisible by i */
	if (n % i == 0)
		return (0);

	/* Recursively check for divisibility with next number */
	return (is_prime_helper(n, i + 1));
}
