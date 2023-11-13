#include "main.h"
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
				{
					char c = (char)va_arg(args_list, int);
					print_char += write(1, &c, 1);

					break;
				}
				case 's':
				{
					char *str = va_arg(args_list, char *);
					while (*str)

					{
						print_char += write(1, str++, 1);
					}
					break;
				}
				case '%':
					print_char += write(1, "%", 1);
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
