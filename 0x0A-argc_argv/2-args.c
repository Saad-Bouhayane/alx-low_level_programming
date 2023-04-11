#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count of arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count = 0; /* Declaring variables */

	if (argc > 0)
	{
		/* WHILE - Print each argument */
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}

