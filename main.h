#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdint.h>

struct spec
{
	char *sign;
	int (*frmt)(va_list);
};
typedef struct spec fn;

int _printer(const char *format, fn f_specifiers[], va_list args);
int put_char(va_list);
int put_str(va_list args);
int put_perc(va_list);
int put_nums(va_list);
unsigned int put_u_nums(unsigned int n);
int put_int(va_list);
void _funcs(const char *format, va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
void dec_to_bin(int num);

#endif
