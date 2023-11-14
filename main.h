#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/*#include <stdlib.h>*/

int _printf(const char *format, ...);
int _putchar(char c);
int prnt_str(const char *s);
int prnt_c(char c);
int print_int(va_list args);
int print_d(va_list args_list);

#endif
