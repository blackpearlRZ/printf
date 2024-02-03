#include "main.h"

void test(void);

/**
 * _printf - prints everything
 * @format: first string
 * Return: the length of the printed content
 */

int _printf(const char *format, ...)
{
	int i, num = 0, len = 0, n;
	char *string;
	char *pointer;
	char *reverse;
	va_list type;

	if (format == NULL)
		return (-1);
	va_start(type, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			switch (format[i + 1])
			{
			case 's':
				len = _str(type);
				i++;
				num += len;
				break;
			case 'c':
				len = _char(type);
				i++;
				num += len;
				break;
			case '%':
				len = _mod(type);
				i++;
				num += len;
				break;
			case 'd':
				pass
			case 'i':
				pass
			case 'b':
				pass
			case 'u':
				pass
			case 'o':
				pass
			case 'x':
				pass
			case 'X':
				pass
			case 'S':
				pass
			case 'p':
				pass
			case 'r':
				pass
			case 'R':

				pass;
			default:
				write(1, &format[i], 1);
				num++;
				break;
			}
		}
		else
		{
			write(1, &format[i], 1);
			num++;
		}
	}
	va_end(type);
	return (num);
}
