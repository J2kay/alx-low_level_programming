#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string pointer
 * @n: number of unknown parameters
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (separator == NULL)
		{
		}
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
