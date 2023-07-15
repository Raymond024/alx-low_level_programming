#include <stdio.h>
/**
 * main - entry point
 * Description: prints lower and upper case alphabet
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	int u = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (u <= 90)
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}

