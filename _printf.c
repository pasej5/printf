#include "main.h"
/**
 *_printf - prints the formatted output of the given parameters
 *@format: format of the given arguement
 *Return: returns the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;
	char *str;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				_putchar(va_arg(args, int));
				len++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char*);
				if (str != NULL)
				{
					while (*str != '\0')
					{
						_putchar(*str);
						str++;
						len++;
					}
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				len++;
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				len += 2;
			}
		}
		else
		{
			_putchar(*format);
			len++;
		}
		format++;
	}
	va_end(args);
	return (len);
}
