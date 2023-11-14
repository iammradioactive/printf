#include "main.h"
#include <stddef.h>
#include <unistd.h>
/**
  * _printf - custom printf function
  * @format: format string with specifiers
  * Return: number of characters printed (excluding the null byte)
  */

int _printf(const char *format, ...)
{
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
					print_char += prnt_c(va_arg(args_list, int));
					break;
				case 's':
				print_char += prnt_str(va_arg(args_list, char *));
				break;
				case '%':
				print_char += _putchar('%');
				break;
				case 'd':
				print_char += print_d(args_list);
				break;
				case 'i':
				print_char += print_int(args_list);
				break;
				default:
				print_char += write(1, "%", 1);
				print_char += write(1, format, 1);
				break;
			}
		}
		else
		{
			print_char += write(1, format, 1);
		}
		format++;
	}
	va_end(args_list);
	return (print_char);
}
