

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
