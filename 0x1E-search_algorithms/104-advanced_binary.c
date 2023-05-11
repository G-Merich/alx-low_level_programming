#include "search_algos.h"

/**
 * Advanced binary Searche
 * Array is NULL
 */
int binary_search_recursion(int *array, int value,
			    size_t left, size_t right)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (left + right) / 2;
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
		printf("%i%s", array[i], i == right ? "\n" : ", ");

	if (array[left] == value)
		return ((int)left);

	if (array[left] != array[right])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
							mid + 1, right));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
							left, mid));
	}

	return (-1);
}

/**
 * Advanced binary searche
 * Array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, left, right));
}
