#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * num_check - check for positive digit
 * @s: array string
 * Return: Always 0 (Success)
 */
int num_check(char *s)
{
	unsigned int ct;

	ct = 0;
	while (ct < strlen(s))
	{
		if (!isdigit(s[ct]))
		{
			return (0);
		}
		ct++;
	}
	return (1);
}
/**
* main - program adds two positive numbers
* @argc: number of arguments passed
* @argv: Arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int ct;
	int str;
	int add = 0;

	ct = 1;
	while (ct < argc)
	{
		if (num_check(argv[ct]))
		{
			str = atoi(argv[ct]);
			add += str;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		ct++;
	}
	printf("%d\n", add);
	return (0);
}
