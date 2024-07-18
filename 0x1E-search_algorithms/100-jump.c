#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array using JSA.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: the first index where value is located, or -1 if not found.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t prev;
	size_t step;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	jump = sqrt(size);
	prev = 0;
	step = jump;

	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)step, array[step]);
		prev = step;
		step += jump;
	}

	for (i = prev; i < size && i <= step; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
