#ifndef MAIN_H
#define MAIN_H
/* Start import the lib*/
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/* Define STRING */
#define STRING ((str) ? str : "(null)")
/* Create My functions  */
int _printf(const char *format, ...);
int _ZD_putchar(char c);
int _ZD_putstr(char *s);
void _ZD_putint(int n);
int _ZD_length_num(int n);
int _ZD_check(char c, va_list args);
int _ZD_printbinary(unsigned int n);
int _ZD_printf_unsigned(va_list args);
int _ZD_printf_oct(va_list val);
int _ZD_print_hex(va_list val);
int _ZD_print_hex_aux(unsigned long int num);
int _ZD_printf_HEX(va_list val);
int _ZD_printf_HEX_aux(unsigned int num);

#endif
