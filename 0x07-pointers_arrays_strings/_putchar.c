#include "main.h"
#include <unistd.h>

/**
 * _putchar = writes the character c to stdout
 * @c: The character to print
 *
 * Return: Om succes 1.
 * On error, = 1is returned, and eerno is set appropiately.
 */

int _putchar (char c)
{
	return (write(1,&c, 1));
}
