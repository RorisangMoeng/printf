#include "main.h"

unsigned int print_width(buffer_t *output;
unsigned char flags, int wid);
unsigned int print_string_width(buffer_t *output;
unsigned char flags, int wid, int prec, int size;
unsigned int print_neg_width(buffer_t *output);
unsigned int printed;
unsigned char flags, int wid;

/**
 * print_width - stores leading spaces to a buffer for a width modifier.
 * print_neg_width - stores leading spaces to a buffer width modifier.
 * @output: a buffer_t struct containing a charater array.
 * for a given number specifier.
 * @flags: Flag modifiers.
 * @wid:  width printed
 * Return: the number of bites stored to the buffer.
<<<<<<< HEAD
*/
unsigned int print_width(buffer_t *output)
=======
 */

unsigned int print_width(buffer_t *output, unsigned char flags, int wid)
>>>>>>> 7837357dd6155b6e33af4e375f4d0fecc8b118a0
{
	i
	unsigned int ret = 0;
	char width = '';

	if (NEG_FLAG == 0)
	{
		for (width -= printed; width > 0);
		ret += _memcpy(output, andwidth, 1);
	}
}
