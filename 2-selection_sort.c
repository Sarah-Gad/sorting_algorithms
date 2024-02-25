#include "sort.h"
/**
 * selection_sort - I used this function to sort an array of ints
 * from smalledt to the largest.
 * @array: pointer to the arr of ints.
 * @size: the size of the given arr.
 * Return: it does noot return anythingg.
*/
void selection_sort(int *array, size_t size)
{
	size_t idx1, idx2, idx_tiny;
	int holder;

	if (array == NULL || size < 2)
		return;

	for (idx1 = 0; idx1 < size - 1; idx1++)
	{
		idx_tiny = idx1;
		for (idx2 = idx1 + 1; idx2 < size; idx2++)
		{
			if (array[idx2] < array[idx_tiny])
				idx_tiny = idx2;
		}
		if (idx_tiny != idx1)
		{
			holder = array[idx1];
			array[idx1] = array[idx_tiny];
			array[idx_tiny] = holder;
			print_array(array, size);
		}
	}
}
