#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void insertion(int32_t array[], int32_t length)
{
  int i = 1;

  for(;i < length; i++)
  {
    int key = array[i];
    int j = i - 1;
    while(j >= 0 && array[j] > key)
    {
      array[j + 1] = array[j--];
    }
      array[j + 1] = key;
  }
}

void main(int32_t argc, char* argv[])
{
  int32_t  array[] = {0,71,52,35,47,57};
  int32_t length = sizeof(array)/sizeof(array[0]);
  insertion(array, length);
  int i = 0;
  while(i < length - 1)
  {
    printf("%d ", array[i]);
    i++;
  }
}
