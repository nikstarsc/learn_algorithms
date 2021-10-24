#include <stdio.h>

struct MaxSubArrayDataStruct
{
  int maxleft;
  int maxright;
  int sum;
};

typedef struct MaxSubArrayDataStruct MaxSubArrayData;

MaxSubArrayData
find_max_crossing_sub_array(int* array, int low, int mid, int high)
{
  MaxSubArrayData data;
  int left_sum = 0;
  int right_sum = 0;
  int sum = 0;
  for(int i = mid; i >=low; i--)
  {
    sum += array[i];
    if (sum > left_sum)
    {
      left_sum = sum;
      data.maxleft = i;
    }
  }
  sum = 0;
  for (int i = mid + 1; i < high; i++)
  {
    sum += array[i];
    if (sum > right_sum)
    {
      right_sum = sum;
      data.maxright = i;
    }
  }
  data.sum = left_sum + right_sum;
  return data;
}

MaxSubArrayData
find_max_subarray(int* array, int low, int high)
{
  if(high == low)
  {
    MaxSubArrayData data;
    data.maxleft = low;
    data.maxright = high;
    data.sum = array[low];
    return data;
  }
  else
  {
    int mid = low + (high - low) / 2;
    MaxSubArrayData left, right, cross;
    left = find_max_subarray(array, low, mid);
    right = find_max_subarray(array, mid + 1, high);
    cross = find_max_crossing_sub_array(array, low, mid, high);
    if (left.sum >= right.sum && left.sum >= cross.sum)
    {
      return left;
    }
    else if (right.sum >= left.sum && right.sum >= cross.sum)
    {
      return right;
    }
    else
    {
      return cross;
    }
  }
}

int main() 
{
  int array[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
  int array_size = (sizeof(array)/sizeof(int));
  MaxSubArrayData data = find_max_subarray(array, 0, array_size - 1);
  for (int i = data.maxleft; i <= data.maxright; i++)
  {
    printf("%d ", array[i]);
  } 
  printf("\nsum = %d", data.sum);
  printf("\n");

  return 0;
}
