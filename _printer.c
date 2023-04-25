#include "main.h"

int _printer(const char *format, fn f_handlers[], va_list args)
{
	int i, j, value, len = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_handlers[j].sign != NULL; j++)
			{
				if (format[i + 1] == f_handlers[j].sign[0])
				{
					value = f_handlers[j].frmt(args);
					if (value == -1)
						return (-1);
					len += value;
					break;
				}
			}
			if (f_handlers[j].sign == NULL)
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					len += 2;
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	return (len);
}
