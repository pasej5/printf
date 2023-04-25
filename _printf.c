#include "main.h"
#include <stdint.h>

/**
 *_printf - it produces the output according to the given format
 *@format: format for the the argument
 *Return: returns an interger
 */

int _printf(const char *format, ...)
{
	int len;

	fn f_handlers[] = {
		{"c", put_char},
		{"s", put_str},
		{"%", put_perc},
		{"d", put_int},
		{"i", put_int},
		{"b", put_bin},
		{NULL, NULL}
	};
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	len = _printer(format, f_handlers, args);
	va_end(args);
	return (len);
}
