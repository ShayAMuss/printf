#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct fmt - function to check for formats
 * @type: The format to print
 * @f: The print function to use
 */
typedef struct fmt
{
char *type;
int (*f)();
} fmt_t;

int print_op(const char *format, fmt_t *print_arr, va_list list);
int _rev(va_list rev);
int _printf(const char *format, ...);
int ch(va_list character);
int str(va_list string);
int _int(va_list integ);
int _ui(va_list unsign);
int _oct(va_list octo);
int _rot13(va_list rot);
int _hex_str(unsigned int n, unsigned int hex, char alpha);
int _hex_l(va_list hexa);
int _hex_u(va_list hexa);
int _strlen(char *s);
int _bin(va_list bin);
int _putchar(char c);
#endif
