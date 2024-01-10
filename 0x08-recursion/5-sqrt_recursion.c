#include "main.h"
int actual_sqrt_recursion(int num, int itr);
/**
 * _sqrt_recursion - the square root of a number
 * @num: number whose squareroot is returned
 * Return: the square root
 */
int _sqrt_recursion(int num)
{
	if (num < 0)
		return (-1);
	return (actual_sqrt_recursion(num, 0));
}
/**
 * actual_sqrt_recursion - recurses to natural squarroot
 * @num: number to calculate the sqaure root of
 * @itr: iterator
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int num, int itr)
{
	if (itr * itr > num)
		return (-1);
	if (itr * itr == num)
		return (itr);
	return (actual_sqrt_recursion(num, itr + 1));
}
