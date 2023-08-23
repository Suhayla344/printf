#include "main.h"

/**
 * _printf - output according to format
 * @format: character string
 *
 * Return: The number of characters printed
 **/

int _printf(const char *format, ...)
{
	int x;
	va_list args;

	if (format == NULL)
		return (-1);

	x = _strlen(format);
	if (x <= 0)
		return (0);

	va_start(args, format);
	x = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (x);
}
