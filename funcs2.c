#include "main.h"

/**
 *put_char - print a character
 *@args: agument given to the function
 *Return: returns 1 on success
 */

int put_char(va_list args)
{
	char letter;

	letter = va_arg(args, int);
	_putchar(letter);
	return (1);
}
/**
 *put_bin - prints binary
 *@args: arguements given
 *Return: return an integer
 */

int put_bin(va_list args)
{
	unsigned int n, m, sum = 0, i, a[32], len = 0;

	n = va_arg(args, unsigned int);
	m = 2147483648;
	a[0] = n / m;

	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}

	for (i = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];

			_putchar(z);
			len++;
		}
	}
	return (len);
}
