#include "main.h"
/**
 * _ZD_printbinary - print a binary number
 * @n: parameter is integer
 * Return: len.
 */
int _ZD_printbinary(unsigned int n)
{
unsigned int m, i;
unsigned int a[32];
int len =  0;
m = 2147483648;
a[0] = n / m;
for (i = 1; i < 32; i++)
{
m /= 2;
a[i] = (n / m) % 2;
}
for (i = 0; i < 31 ; i++)
if (a[i])
break;
for (; i < 32; i++)
{
char z = '0' + a[i];
write(1, &z, 1);
len++;
}
return (len);
}
