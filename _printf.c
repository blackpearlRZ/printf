#include "main.h"

/**
 * _printf - Custom printf function that selects the appropriate function for printing.
 * @format: Format specifier string.
 * Return: The length of the printed string.
 */
int _printf(const char * const format, ...)
{
    convert_match m[] = {
        {"%s", printf_string}, {"%c", printf_char},
        {"%%", printf_37},
        {"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
        {"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
        {"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
        {"%S", printf_exclusive_string}, {"%p", printf_pointer}
    };

    va_list args;
    int i = 0, len = 0;

    va_start(args, format);

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    while (format[i] != '\0')
    {
        int j = 13;
        int found_match = 0;

        while (j >= 0)
        {
            if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
            {
                len += m[j].f(args);
                i += 2;
                found_match = 1;
                break;
            }
            j--;
        }

        if (!found_match)
        {
            _putchar(format[i]);
            len++;
            i++;
        }
    }

    va_end(args);
    return len;
}

