#include "main.h"
/**
 * factorial - the factorial of a number
 * @num: number whose factorial is returned
 * Return: factorial of num
 */
int factorial(int num)
{
	if (num < 0)
		return (-1);
	if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}
