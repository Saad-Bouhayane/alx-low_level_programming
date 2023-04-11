#include <stdio.h>
#include "main.h"

/**
 * main - Print the count of command-line arguments
 * @argc: Count of arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* Ignore argv */
	(void)argv;
	printf("%i\n", argc - 1);

	return (0);
}
