#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: a character to be checked
 * Return: returns i if digit or 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
