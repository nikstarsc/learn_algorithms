#ifndef ALGO_LIB_H_INCLUDED
#define ALGO_LIB_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define len_static_array(input_array) ((sizeof(input_array))/(sizeof(input_array[0])))
#define blank_line printf("\n")
#define swap_int(a, b) {(a) = (a) + (b); (b) = (a) - (b); (a) = (a) - (b);}

void insertion_sort_increasing(int* array_to_sort, int length_of_array);
void insertion_sort_decreasing(int* array_to_sort, int length_of_array);

void selection_sort_increasing(int* array_to_sort, int length_of_array);
void selection_sort_decreasing(int* array_to_sort, int length_of_array);

void print_array_before_and_after_sort (void (*foo)(int*, int), int* array_to_sort, int length_of_array);
void print_array(int* array_to_sort, int length_of_array);


#endif // ALGO_LIB_H_INCLUDED
