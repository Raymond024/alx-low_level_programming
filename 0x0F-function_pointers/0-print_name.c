#include "function_pointers.h"
#include "function_pointers.h"
/**
 * print_name - print name using pointer to a funnction
 * @name: string to add
 * @f: pointer to a function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
