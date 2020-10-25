/**
Various Utilities functions defined in this file.
*/

#include "include/algo_lib.h"

void print_array(int* array_to_sort, int length_of_array)
{
	for(int i = 0; i < length_of_array; i++)
    {
		printf((i < (length_of_array - 1)) ? "%d, ": "%d]\n",
			  *(array_to_sort + i));
    }

}

void print_array_before_and_after_sort (void (*foo)(int*, int), int* array_to_sort, int length_of_array)
{
	printf("array before applying sort =\t[");
    print_array(array_to_sort, length_of_array);
    foo(array_to_sort, length_of_array);

    printf("array after applying sort =\t[");
    print_array(array_to_sort, length_of_array);
}

