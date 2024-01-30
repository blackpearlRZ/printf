#include "main.h"
/**
 * _str - prints a string
 * @type: the argument to print
 * Return: len
 */

int _str(va_list type)
{
	int i;
	int r_value;
	char *s = va_arg(type, char *);

	if (s == NULL)
	{
		write(1, "(null)", 6);
		r_value = 6;
		return (r_value);
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			write(1, &s[i], 1);
		}
		r_value = i;
	}
	return (r_value);
}

/**
 * _char - prints a char
 * @type: the argument
 * Return: len
 */

int _char(va_list type)
{
	int len = 1;
	char c = va_arg(type, int);

	if (write(1, &c, 1) < 0)
		return (-1);
	return (len);
}

/**
 * _mod - prints modulo sign
 * @type: the argument to print
 * Return: len
 */

int _mod(__attribute__ ((unused)) va_list type)
{
	int len = 1;
	char c = '%';

	if (write(1, &c, 1) < 0)
		return (-1);
	return (len);
}


/**
 * _str_num - prints a string
 * @s: the argument to print
 * Return: len
 */

int _str_num(char *s)
{
	int i;
	int r_value;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		r_value = 6;
		return (r_value);
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			write(1, &s[i], 1);
		}
		r_value = i;
	}
	return (r_value);
}
