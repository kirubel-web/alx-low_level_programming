#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a character
 * @ap: va_list containing the character to print
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints an integer
 * @ap: va_list containing the integer to print
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @ap: va_list containing the float to print
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @ap: va_list containing the string to print
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char*);

	printf("%s", s == NULL ? "(nil)" : s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *sep = "";

	print_t print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != print[j].param[0])
			++j;
		if (j < 4)
		{
			printf("%s", sep);
			print[j].f(ap);
			sep = ", ";
		}
		++i;
	}
	printf("\n");
	va_end(ap);
}
