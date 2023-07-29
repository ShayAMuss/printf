#include "main.h"

/**
 * _rev - Prints reverse string.
 * @str: Pointer character
 * @i: an int number
 * @count: an int number
 * Return: Numbers of chars printed
 */

int _rev(va_list rev)
{
	char *str;
	int i, count = 0;

	str = va_arg(rev, char *);

	if (str == NULL)
	{

		str = ")Null(";
	}
	for (i = 0; str[i]; i++)
		;

	for (i = i - 1; i >= 0; i--)
	{

		count++;
	}
	return (count);
}
