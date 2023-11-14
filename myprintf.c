#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
  * _printf - custom printf function
  * @format: format string with specifiers
  * Return: number of characters printed (excluding the null byte)
  */

int _printf(const char *format, ...)
{
	if (format == NULL)
		return (-1);

	va_list args_list;
	int print_char = 0;

	va_start(args_list, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			switch (*format)
			{
				case 'c':
					print_char += print_c(va_arg(args_list, int));
					break;
				case 's':
					print_char += print_str(va_arg(args_list, char *));
					break;
				case '%':
					print_char += _putchar('%');
					break;
				case 'd':
				case 'i':
					print_char += print_int(args_list);
					break;
				default:
				print_char += _putchar('%');
				print_char += _putchar(*format);
				break;
			}
		}
		else
		{
			print_char += _putchar(*format);
		}
		format++;
	}
	va_end(args_list);
	return (print_char);
}
