#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string separator
 * @n: numbers of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *p;

	va_start(ap, n);

	if (n <= 0)
	{
		printf("\n");
	}

	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char*);
		(p == NULL) ? printf("(nil)") : printf("%s", p);

		if (i == n - 1)
		{
			printf("\n");
			exit(0);
		}
		if (separator == NULL)
			;
		else
			printf("%s", separator);
	}
	va_end(ap);
}
