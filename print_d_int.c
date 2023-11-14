#include "main.h"

/**
 * print_digits - prints digits
 * @n: number to print
 * Return: integer
 */
int print_digits(int n)
{
	int exp = 1, num = n, digit, count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	while (num / 10 != 0)
	{
		exp = exp * 10;
		num = num / 10;
	}

	num = n;
	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num -= digit * exp;
		exp = exp / 10;
		count++;
	}

	return (count);
}

/**
 * print_int - print integer
 * @args_list: argument list
 * Return: number of printed characters
 */
int print_int(va_list args_list)
{
	return (print_digits(va_arg(args_list, int)));
}

/**
 * print_d - prints integer
 * @args_list: arguments
 * Return: integer
 */
int print_d(va_list args_list)
{
	return (print_digits(va_arg(args_list, int)));
}
