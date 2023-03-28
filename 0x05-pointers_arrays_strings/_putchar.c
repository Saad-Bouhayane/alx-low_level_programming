#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


vi 0-reset_to_98.c
#include "main.h"

/**
 * reset_to_98 - updates the value of the variable
 * the pointer points to to 98
 * @n: pointer to the variable to update
 */
void reset_to_98(int *n)
{
	*n = 98;
}
