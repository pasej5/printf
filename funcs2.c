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
