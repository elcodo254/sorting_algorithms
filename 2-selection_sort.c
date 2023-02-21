#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort algorithm
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, tmp, index;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		if (min != array[i])
		{
			tmp = array[i];
			array[i] = min;
			array[index] = tmp;
			print_array(array, size);
		}
	}
}
