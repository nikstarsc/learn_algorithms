/**
Insertion Sort algorithms from Introduction to Algorithm chapter-1
*/

#include "include/algo_lib.h"

void insertion_sort_increasing(int* array_to_sort, int length_of_array)
{
    for(int i = 1; i < length_of_array; i++)
    {
        int key = *(array_to_sort + i);
        int j = i - 1;
        while(j >= 0 && *(array_to_sort + j) > key)
        {
            *(array_to_sort + (j + 1)) = *(array_to_sort + j);
            j = j - 1;
        }
        *(array_to_sort + (j + 1)) = key;
    }
}

void insertion_sort_decreasing(int* array_to_sort, int length_of_array)
{
    for(int i = 1; i < length_of_array; i++)
    {
        int key = *(array_to_sort + i);
        int j = i - 1;
        while(j >= 0 && *(array_to_sort + j) < key)
        {
            *(array_to_sort + (j + 1)) = *(array_to_sort + j);
            j = j - 1;
        }
        *(array_to_sort + (j + 1)) = key;
    }
}
