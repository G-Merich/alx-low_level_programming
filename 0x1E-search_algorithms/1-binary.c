#include "search_algos.h"
/**
* Binary saerch algorithm
*/
int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size -1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%d%s", array[i], i == high ? "\n" : "' ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)

			high = mid - 1;

		else

			return (mid);

	}

	return (-1);
}
/**
* Calculation of midpoint
*/

size_t midpoint(size_t start, size_t end)
{
	int num = start + end;

	if (num % 2 == 0)
		num = num / 2 - 1;
	else
		num = num / 2;
	return (num);
}
