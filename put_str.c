#include "main.h"

int put_str(char *str)
{
	int i = 0, j = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			j += 1;
			i++;
		}
	}
	return (j);
}
