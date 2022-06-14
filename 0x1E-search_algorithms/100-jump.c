#include "search_algos.h"

/**
 * jump_search - search for a value in an sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number elements of the array
 * @value: value to search for
 *
 * Use the square root of the size of the array as the jump step
 *
 * Return: the first value index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int block_step = 0;
	unsigned int prev = 0; /* initial value to the block, more to left in index */

	if (array == NULL)
		return (-1);

	block_step = sqrt(size);
	while (block_step < size)
	{
		if (array[prev] <= value && array[block_step] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = block_step;
		block_step += sqrt(size);
		if (block_step > size - 1)
			return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%d] and [%d]\n", prev, block_step);
	/* Linear search */
	while (prev <= block_step)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	return (-1);
}
