/**
 * Algorithm for merge sort from Introduction to Algorithm chapter-1 
**/
#include "include/algo_lib.h"

static void 
merge(int* array_to_sort, int p, int q, int r)
{
	int n1 = q - p + 1;
	int n2 = r - q;

	/* Create temp arrays */
	int L[n1], R[n2];

	/* Copy data to temp arrays */	
	for(int i = 0; i < n1; i++)
	{
		L[i] = array_to_sort[p + i];
	}
	for(int i = 0; i < n2; i++)
	{
		R[i] = array_to_sort[q + i + 1];
	}

	/* Merge temp array back into array_to_sort 
	 * int i: initial index of first subarray
	 * int j: initial index of second subarray
	 * int k: initial index of merged subarray
	 * */
	int i = 0;
	int j = 0;
	int k = p;
	while(i < n1 && j < n2)
	{
		if(L[i] <= R[j])
		{
			array_to_sort[k] = L[i];
			i++;
		}
		else
		{
			array_to_sort[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there are any */
	while(i < n1)
	{
		array_to_sort[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there are any */
	while(j < n2)
	{
		array_to_sort[k] = R[j];
		j++;
		k++;
	}

}


static void 
merge_sort_in_given_order(int* array_to_sort, int p, int r)
{
	if(p < r)
	{
		int q = p + (r - p) / 2;
		merge_sort_in_given_order(array_to_sort, p, q);
		merge_sort_in_given_order(array_to_sort, q + 1, r);
		merge(array_to_sort, p, q, r);
	}
}

void 
merge_sort_increasing(int* array_to_sort, int length_of_array)
{
	merge_sort_in_given_order(array_to_sort, length_of_array);
}
