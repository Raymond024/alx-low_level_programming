#include <stdio.h>
/**
 * main - entry point
 * Description: print all numbers of base 16
 * Return: always 0
 */
int main(void)
{
	int n;
	int u;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (u = 97; u <= 102; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
