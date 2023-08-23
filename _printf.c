#include "main.h"
/**
 * _printf - function prints output according to a format
 * @format: the format string
 * Return: the number of chars
 */
int _printf(const char *format, ...)
{
unsigned int i, len = 0;
va_list args;
if (format == NULL)
return (-1);
va_start(args, format);
for (i = 0; format[i]; i++)
{
if (format[i] != '%')
{
len += _ZD_putchar(format[i]);
continue;
}
if (i++ == strlen(format) - 1)
return (-1);
len += _ZD_check(format[i], args);
}
va_end(args);
return (len);
}
