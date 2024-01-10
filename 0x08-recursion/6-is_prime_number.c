#include "main.h"
int actualprime(int n, int i);
/**
 * is_prime_number - checks if int is prime number
 * @num: number
 * Return: 1 if num is a prime number, 0 if not
 */
int is_prime_number(int num)
{
	if (num <= 1)
		return (0);
	return (actualprime(num, num - 1));
}

/**
 * actualprime - calculates prime recursively
 * @num: number
 * @itr: iterator
 * Return: 1 if n is prime, 0 if not
 */
int actualprime(int num, int itr)
{
	if (itr == 1)
		return (1);
	if (num % itr == 0 && itr > 0)
		return (0);
	return (actualprime(num, itr - 1));
}
