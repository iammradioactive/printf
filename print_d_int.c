#include "main.h"

/**
 * print_int - prints integer
 * @args_list: arguments
 * Return: integer
 */
int print_int(va_list args_list)
{
	int n = va_arg(args_list, int);
	int char_cnt = 0;
	int exp, num, digit;

	/* handle negative int arguments*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		char_cnt++;
	}

	/* digit extraction*/
	exp = 1;
	num = n;

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
		char_cnt++;
	}
	return (char_cnt);
}

/**
 * print_d - prints integer
 * @args_list: arguments
 * Return: integer
 */
int print_d(va_list args_list)
{
	int n = va_arg(args_list, int);
	int char_cnt = 0;
	int exp, num, digit;

	/*handle negative int arguments*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		char_cnt++;
	}

	/* digit extraction*/
	exp = 1;
	num = n;

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
		char_cnt++;
	}
	return (char_cnt);
}
