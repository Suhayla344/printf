#include "main.h"

/**
 * _putchar - writes the character
 * @c: The character to print
 *
 * Return:success 1.
 * On error, -1 is returned.
*/
int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - Save in a buffer
 * @c: Character
 *
 * Return: 1
*/
int buffer(char c)
{
	static char bufferd[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, bufferd, i);
		i = 0;
	}

	if (c != -1)
		bufferd[i++] = c;

	return (1);
}
