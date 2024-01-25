#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - function that prints numbers
* @separator: string between numbers
* @n: number of integers given to function
* @...: alternative parameters passed to function
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int i;

	va_start(numb, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numb, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numb);
}
