#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - funtion to determine last number
 *
 * Description: This function allow us to describe
 * the last digit of a number.
 * Return: 0;
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n;

	/*Determination of the las t number*/
	while ((last > 10) || (-last > 10))
	{
		last = last % 10;
	}

	printf("Last digit of %d is %d", n, last);

	if (last > 5)
	{
		printf(" and is greater than 5");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}


	return (0);
}
