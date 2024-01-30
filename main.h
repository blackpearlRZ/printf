#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int _char(va_list type);
int _str(va_list type);
int _str_num(char *s);
int _mod(va_list type);
int _printf(const char *format, ...);
int _number(int n, char spec);
int _print_number(unsigned long int n, char spec, int sign);
int _print_binary(unsigned int n);
int _nonprintable(char *str);
int pointer_print(void *pointer);
int reverse_print(char *s);
int _rot13(char *s);


#endif
