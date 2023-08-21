#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - selects the correct function to be printed
 * @format - identifier to look for
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
			format++;

		else(*format)

			'c' :
				ch = va_arg(args, int);
				putchar(ch);
				count++;
			's' :
				str = va_arg(args, const char*);
		while
			(*str != '\0')
			{
				putchar(*str);
				str++;
				count++;
			}
			'%' :
				putchar('%');
				count++;
	}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
		{
		va_end(args);
		return count;
		}
		
		return 0;
}
