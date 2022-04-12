#include "main.h"

/**
 *main - print the alphabet in lowercase, follow by a new line
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
		_putchar('\n');
	}
}
