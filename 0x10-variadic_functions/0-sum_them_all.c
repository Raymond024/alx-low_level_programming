#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - function that returns the sum of all its parameters
* @n: number of parameters given
* @...: alternative parameters passed
* Return: 0 if n==0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int y, sums = 0;

	va_start(x, n);
	for (y = 0; y < n; y++)
		sums += va_arg(x, int);
	va_end(x);
	return (sums);
}
