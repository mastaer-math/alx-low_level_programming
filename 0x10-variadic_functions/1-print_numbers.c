#include "variadic_functions.h"

/**
* printNumbers -  a function that prints numbers, followed by a new line
* @separator: delimiter
* @n: n args
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argument1;
	unsigned int k;

	va_start(argument1, n);
	if (n != 0)
	{
		for (k = 0; (k < n - 1); k++)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(argument1, int), separator);
			}
			else
			{
				printf("%d", va_arg(argument1, int));
			}
		}
		printf("%d", va_arg(argument1, int));
		va_end(argument1);
	}
	printf("\n");
}
