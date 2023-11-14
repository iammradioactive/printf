#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(char *str);
int print_c(int c);
int print_int(va_list args_list);
int print_d(va_list args_list);

#endif
