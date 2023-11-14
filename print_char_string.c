#include "main.h"
#include <stddef.h>

/**
 * print_str - prints all character in a string
 * @str: string to be printed
 * Return: number of characters printed
 */
int print_str(char *str)
{
	int count = 0;

	if (str == NULL || *str == '\0')
		return (0);

	while (*str != '\0')
	{
		if (*str == '\n')
		{
			_putchar('\n');
		}
		else
		{
			_putchar(*str);
		}
		count++;
		str++;
	}

	return (count);
}

/**
 * print_c - prints a character
 * @c: character to print
 * Return: always 1
 */

int print_c(int c)
{
	_putchar(c);
	return (1);
}
