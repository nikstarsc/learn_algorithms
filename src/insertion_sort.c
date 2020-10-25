/**
Insertion Sort algorithms from Introduction to Algorithm chapter-1
*/

#include "include/algo_lib.h"
#define increasing(key, j) (*(array_to_sort + j) > key)
#define decreasing(key, j) (*(array_to_sort + j) < key)

static void sort_array_in_given_order(bool increasing_order, int *array_to_sort, int length_of_array)
{
    for(int i = 1; i < length_of_array; i++)
    {
        int key = *(array_to_sort + i);
        int j = i - 1;
        while(j >= 0 && ((increasing_order)?  increasing(key, j): decreasing(key, j)))
        {
            *(array_to_sort + (j + 1)) = *(array_to_sort + j);
            j = j - 1;
        }
        *(array_to_sort + (j + 1)) = key;
    }
}

void insertion_sort_increasing(int* array_to_sort, int length_of_array)
{
   sort_array_in_given_order(true, array_to_sort, length_of_array);
}

void insertion_sort_decreasing(int* array_to_sort, int length_of_array)
{
    sort_array_in_given_order(false, array_to_sort, length_of_array);
}


