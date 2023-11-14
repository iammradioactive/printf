#include "main.h"
#include <stddef.h>

/**
 * prnt_str - prints all character in a strig
 * @s: string to be printed
 */
int prnt_str(const char *s)
{
	int count = 0;

	if (*s == '\0')
		return (0);

	while (*s != '\0')
	{
		if (s == NULL)
			return (0);
		if (*s == '\n')
		{
			_putchar('\n');
		}
		else
		{
			_putchar(*s);
		}
		count++;
		s++;
	}
	return (count);
}

/**
 * prnt_c - prints a character
 * @c: character to print
 */

int prnt_c(char c)
{
	_putchar(c);
	return (1);
}
