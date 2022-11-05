#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: the array
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t minimum = 0;

	for (i = 0; i < size - 1; i++)
	{
		minimum = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minimum])
				minimum = j;
		}
		if (i != minimum)
		{
			swap_integers(&array[minimum], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * swap_integers - swaps integers in a list
 * @a: first integer
 * @b: second integer
 * Return: void
 */
void swap_integers(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
