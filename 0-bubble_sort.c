#include "sort.h"

/**
 * swap - swaps two integers
 * @first: first element
 * @second: second element
 *
 */

void swap(int *first, int *second)
{
	int tmp;

	tmp = *first;
	*first = *second;
	*second = tmp;
}

/**
 * bubble_sort - sorts array of integers using bubble sort algorithm
 *
 * @array: pointer to an array
 * @size: size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, n, j;

	if (array == NULL || size < 2)
		return;

	n = size;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, n);
			}
		}
	}
}
