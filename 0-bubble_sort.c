#include "sort.h"
/**
 * shift_two_ints - This function shifts the place of two ints
 * @i1: the first int.
 * @i2: the seconf int
 * Return: it doesnt return anything.
*/
void shift_two_ints(int *i1, int *i2)
{
	int holder = *i1;
	*i1 = *i2;
	*i2 = holder;
}
/**
 * bubble_sort - This function uses bubble sort Algo
 * to sort an array of ints from smallest to the largest nums
 * @array: pointer to the firt number in the array
 * @size: the size of the array
 * Return: it returns nooothing.
*/
void bubble_sort(int *array, size_t size)
{
	size_t a_idx, outer;
	int done = 0;

	for (outer = 0; outer < (size - 1); outer++)
	{
		for (a_idx = 0; a_idx < (size - outer - 1); a_idx++)
		{
			if (array[a_idx] > array[a_idx + 1])
			{
				shift_two_ints(&array[a_idx], &array[a_idx + 1]);
				print_array(array, size);
				done++;
			}
		}
		if (done == 0)
			break;
	}
}
