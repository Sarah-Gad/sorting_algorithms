#include "sort.h"
/**
 * part_it - This fucntion is used to split the array into subarrays
 * @the_arr: the array to split
 * @beg: the beginning of the arr.
 * @ed: the end of the arr.
 * @sz: the size of the arr.
 * Return: the place to do the recuirsion.
*/
int part_it(int *the_arr, int beg, int ed, size_t sz)
{
	int base;
	int idx1, idx_2;
	int keeper;

	base = the_arr[ed];
	idx1 = beg - 1;
	for (idx_2 = beg; idx_2 <= ed - 1; idx_2++)
	{
		if (the_arr[idx_2] <= base)
		{
			idx1++;
			keeper = the_arr[idx1];
			the_arr[idx1] = the_arr[idx_2];
			the_arr[idx_2] = keeper;
			if (idx1 != idx_2)
				print_array(the_arr, sz);

		}
	}
	keeper = the_arr[idx1 + 1];
	the_arr[idx1 + 1] = the_arr[idx_2];
	the_arr[idx_2] = keeper;
	if (idx1 + 1 != ed)
		print_array(the_arr, sz);
	return (idx1 + 1);
}
/**
 * do_thesorting - This function is used to sort the aray using recursion
 * @the_arr: The array to sortt.
 * @beg: The beginnging of the arr.
 * @ed: the end of the arr.
 * @sz: its sizze.
*/

void do_thesorting(int *the_arr, int beg, int ed, size_t sz)
{
	int base_place;

	if (beg < ed)
	{
		base_place  = part_it(the_arr, beg, ed, sz);
		do_thesorting(the_arr, beg, base_place - 1, sz);
		do_thesorting(the_arr, base_place + 1, ed, sz);
	}
}
/**
 * quick_sort - This fucntionn passed the
 * array and its sixe to the do_thesorting
 * @array: the arry that needs to be sorted
 * @size: the size of it.
 * Return: it does not return anything..
*/
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	do_thesorting(array, 0, (int)size - 1, size);
}
