#include "main.h"
/**
 *put_str - prints a string
 *@args: given string
 *Return: returns numbers of characters
 */
int put_str(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char*);
	if (str == NULL)
		str = "(nil)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
/**
 *put_perc - prints the %
 *@args: given character
 *Return: retuns 1
 */
int put_perc(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}
/**
 *put_nums - evaluates the given nember
 *@args: numbers given as arguements
 *Return: retuns a number
 */
int put_nums(va_list args)
{
	int i, j, len;
	unsigned int num;

	i = va_arg(args, int);
	j = 1;
	len = 0;
	if (i < 0)
	{
		len += _putchar('-');
		num = i * -1;
	}
	else
		num = i;
	for (; num / j > 9; )
	{
		j *= 10;
	}
	for (; j != 0; )
	{
		len += _putchar('0' + num / j);
		num = num % j;
		j = j / 10;
	}
	return (len);
}
/**
 *put_u_nums - evaluate unsigned numbers
 *@n: a given number
 *Return: retuns a number
*/
unsigned int put_u_nums(unsigned int n)
{
	int j, len;
	unsigned int num;

	num = n;
	j = 1;
	len = 0;
	for (; num / j > 9; )
	{
		j *= 10;
	}
	for (; j != 0; )
	{
		len += _putchar('0' + num / j);
		num = num % j;
		j = j / 10;
	}
	return (len);
}
/**
 *put_int - prints an integer
 *@args: a given argument
 *Return: returns a number
*/
int put_int(va_list args)
{
	int num;

	num = put_nums(args);
	return (num);
}
