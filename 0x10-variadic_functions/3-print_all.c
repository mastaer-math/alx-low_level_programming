#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* printAll - a function that prints anything.
* @format: format
*/
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int k = 0, start = 0;
	char *l;

	va_start(list, format);
	while (format && format[k] != '\0')
	{
		switch (format[k])
		{ case 'c':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(list, int));
			break;
			case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(list, double));
			break;
		case's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			l = va_arg(list, char*);
			if (l)
			{ printf("%s", l);
			break; }
			printf("%p", l);
			break; }
		k++;
	}
	printf("\n");
	va_end(list);
}
