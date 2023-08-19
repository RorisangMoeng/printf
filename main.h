#ifndef MAIN_H
#define MAIN_H

#include<limits.h>
#include<stdarg.h>
#include<stdlib.h>
#include<unistd.h>

/*FLAG*/
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/*SIZES*/
#define S_LONG 2
#define S_SHORT 1

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

#endif MAIN_H
