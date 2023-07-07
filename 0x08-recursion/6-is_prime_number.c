#include "main.h"

int check_prime(int n, int p);

/**
 * is_prime_number - prints 1 if a number
 *   inputed is a prime number and 0 if not
 * @n: input integer to be checked
 * Return: 1 on success
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - checks and returns an integer if n is a prime number
 * @n: input integer to be checked
 * @p: input integer
 * Return: 1 on success
 */

int check_prime(int n, int p)
{
	if (p == 1)
		return (1);
	if (n % p == 0 && p > 0)
		return (0);
	return (check_prime(n, p - 1));
}
