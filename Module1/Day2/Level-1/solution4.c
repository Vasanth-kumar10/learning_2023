#include<stdio.h>

int countTotalNumberOfBits (int num)
{
  int count = 0;
  while (num != 0)
    {
      count += num & 1;
      num >>= 1;
    }
  return count;
}

int main ()
{
  int size;
  printf ("Enter the size of the array: ");

  scanf ("%d", &size);

  int arr[size];

  for (int i = 0; i < size; i++)
    {

      printf ("Enter the array elements arr[%d]: ", i);
      scanf ("%x", &arr[i]);
    }
  int total_bits = 0;
  for (int i = 0; i < size; i++)
    {
        int count_bits = countTotalNumberOfBits(arr[i]); 
        printf ("The number of set bits in arr[%d] is: %d\n",i,count_bits);
        total_bits += countTotalNumberOfBits (arr[i]);
    }
    
    printf ("The total number of set bits in the given array is: %d ", total_bits);

  return 0;
}