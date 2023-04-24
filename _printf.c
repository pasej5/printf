#include "main.h"
/**
 *_printf - prints the formatted output of the given parameters
 *@format: format of the given arguement
 *Return: returns the number of characters printed
 */
int _printf(const char *format, ...)
{
	int len = 0, i;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			format++;
			if (format[i] == '\0')
				break;
			if (format[i] == 'c')
			{
				_putchar(va_arg(args, int));
				len++;
			}
			else if (format[i] == 's')
			{
				int s = put_str(va_arg(args, char*));
				len += (s - 1);
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				len++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				len += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			len += 1;
		}
	}
	va_end(args);
	return (len);
}
