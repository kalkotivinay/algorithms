
#include <stdio.h>

int find_max(int array[], int len)
{
  int max = 0;
  int i;
  
  for (i=0; i < len; i++) {
    if (array[i] > max)
      max = array[i];
  }
  
  return max;
}


int main()
{
  int array[] = { 2, 3, 4, 9, 6, 6, 7};

  printf("max = %d\n", find_max(array, 7));
  return 0;
}