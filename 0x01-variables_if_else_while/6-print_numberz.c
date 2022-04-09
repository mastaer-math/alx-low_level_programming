#include <stdio.h>

/**
 * main - Print numbers single in base ten
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
