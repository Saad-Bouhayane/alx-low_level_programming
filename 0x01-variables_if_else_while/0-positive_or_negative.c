#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determine if number is positive or negative
 *
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
betty 0-positive_or_negative.c
chmod u+x 0-positive_or_negative.c



1-----vi 1-last_digit.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print last digit in random number
 *
 * Description: print last digit in random number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
