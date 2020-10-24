#include "include/algo_lib.h"

int main()
{
    int array_to_sort_1[] = {55, 41, 60, 7, 1, 9, 15, -19, 25, 3, 1, 20, 11};
    print_array_before_and_after_sort(insertion_sort_increasing, array_to_sort_1,
                                      len_static_array(array_to_sort_1));

//	print_array_before_and_after_sort(insertion_sort_decreasing, array_to_sort_1,
//                                      len_static_array(array_to_sort_1));
    return 0;
}
