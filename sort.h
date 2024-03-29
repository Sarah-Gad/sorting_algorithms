#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
*/
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void shift_two_ints(int *i1, int *i2);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
int part_it(int *the_arr, int beg, int ed, size_t sz);
void do_thesorting(int *the_arr, int beg, int ed, size_t sz);
void quick_sort(int *array, size_t size);

#endif
