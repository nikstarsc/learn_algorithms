#include "include/algo_lib.h"

int main()
{
	int array_to_sort_1[] = {55, 41, 60, 7, 1, 9, 15, -19, 25, 3, 1, 20, 11};
	print_array_before_and_after_sort(insertion_sort_increasing, array_to_sort_1, len_static_array(array_to_sort_1));
	blank_line;
	print_array_before_and_after_sort(insertion_sort_decreasing, array_to_sort_1, len_static_array(array_to_sort_1));

	blank_line;

	int array_to_sort_2[] = {180, 416, 60, 71, -1, 19, 15, 0, 25, 3, 1, 20, -11};
	print_array_before_and_after_sort(selection_sort_increasing, array_to_sort_2, len_static_array(array_to_sort_2));
	blank_line;
	print_array_before_and_after_sort(selection_sort_decreasing, array_to_sort_2, len_static_array(array_to_sort_2));

	int array_to_sort_3[] = {180, 416, 60, 71, -1, 19, 15, 0, 25, 3, 1, 20, -11};
	print_array_before_and_after_sort(merge_sort_increasing, array_to_sort_3, len_static_array(array_to_sort_3));
	blank_line;


	return 0;
}

