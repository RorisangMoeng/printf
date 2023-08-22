#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - function to be printed
 * @format: identifier
 * Return: length of the string
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;
	char ch;
	const char *str;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				ch = va_arg(args, int);
				putchar(ch, &count);
				count++;
			}
				str = va_arg(args, const char*);
			else if (*format == 's')
			{
				str = va_arg(args, const char*);
				while (*str != '\0')
				{
				putchar(*str, &count);
				str++;
				count++;
				}
			}
				putchar('%');
				count++;
		}
		else
		{
			putchar(*format, &count);
			count++; }
		format++;
	} va_end(args);
	return (count);
}
