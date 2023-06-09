#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Count of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int position, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1}; /* Array of integers */

	position = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]); /* Convert str to int */

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	/* While loop to calculate minimum number of coins */
	while (coins[position] != '\0')
	{
		if (total >= coins[position])
		{
			aux = (total / coins[position]);
			change += aux;
			total -= coins[position] * aux;
		}

		position++;
	}

	printf("%d\n", change);

	return (0);
}

