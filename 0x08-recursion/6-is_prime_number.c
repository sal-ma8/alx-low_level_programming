#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - sas
 * @n: ss
 * Return: numb
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - ff
 * @n:dd
 * @i:ss
 * Return: num
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
