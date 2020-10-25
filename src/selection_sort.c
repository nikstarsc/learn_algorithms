/**
Algorithm for selection sort for question 2.2.2 from introduction to algorithm
*/

#include "include/algo_lib.h"
#define increasing(i, j) (*(array_to_sort + j) < *(array_to_sort + i))
#define decreasing(i, j) (*(array_to_sort + j) > *(array_to_sort + i))

static void sort_array_in_given_order(bool increasing_order, int* array_to_sort, int length_of_array)
{
	for(int i = 0; i < length_of_array - 1; i++)
	{
		int key = i;

		for(int j = i + 1; j < length_of_array; j++)
		{
			if((increasing_order)? increasing(key, j): decreasing(key, j))
			{
				key = j;
			}
		}
		if(key != i)
		{
			swap_int(*(array_to_sort + i), *(array_to_sort + key));
		}
	}
}

void selection_sort_increasing(int* array_to_sort, int length_of_array)
{
	sort_array_in_given_order(true, array_to_sort, length_of_array);
}

void selection_sort_decreasing(int* array_to_sort, int length_of_array)
{
	sort_array_in_given_order(false, array_to_sort, length_of_array);
}
