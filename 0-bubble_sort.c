#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @int: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx;
	int swaps = 1,  shfl = 0;

	while (swaps != 0)
	{
		swaps = 0;
		for (idx = 0; idx < size - 1; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				shfl = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = shfl;
				swaps = 1;
				print_array(array, size);
			}
		}
	}
}
