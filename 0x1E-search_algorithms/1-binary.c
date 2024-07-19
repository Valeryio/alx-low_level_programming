#include "search_algos.h"

/**
 * binary_search - perform a linear search
 *
 * @array: (int) an array of integer
 * @size: (int) the size of the array
 * @value: (int) the value to search
 *
 * Description: This function makes a binary search on the
 * array to find the value
 *
 * Return: The value ON SUCCESS, and -1
 */

int binary_search(int *array, size_t size, int value)
{
	int right = (int) size - 1, left = 0, middle = 0;

	print_array(0, size, array);
	while (left < right)
	{
		middle = (left + right) / 2;
		if (value == middle)
		{
			return (middle);
		}
		else if (value < array[middle])
		{
			right = middle - 1;
			print_array(0, right + 1, array);
		}
		else
		{
			left = middle + 1;
			print_array(left, right + 1, array);
		}
	}
	return (-1);

}

/**
 * print_array - print an array of integer
 *
 * @start: (int), the starting index
 * @end: (int), the index at the end
 * @array: (int), the array to print
 *
 * Description: This function prints from the index @start
 * to the index @end of an integer array
 * Return:
 * Nothing
 */

void print_array(int start, int end, int *array)
{
	int i = 0;

	if (!array)
		printf("The array is empty");


	printf("Searching in the array:");
	for (i = start; i < end; i++)
	{
		printf(" %d", array[i]);

		if ((end - i) != 1)
			printf(",");
		else
			printf("\n");
	}

}
