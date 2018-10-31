#include <stdio.h>


void selection(int array[], int length)
{
   int i = 0;
   for(;i < length - 1; i++)
   {
     int minIndex = i;
     int j = i + 1;
     for(;j < length; j++)
     {
        if( array[j] < array[minIndex])
        {
            minIndex = j;
        }
     }
     int temp = array[minIndex];
     array[minIndex] = array[i];
     array[i] = temp;
   }
}


void main(int argc, char* argv)
{
  int  array[] = {1,2,1,71,0,0,0,71,52,35,47,57};
  int length = sizeof(array)/sizeof(array[0]);
  selection(array, length);
  int i = 0;
  while(i < length - 1)
  {
    printf("%d ", array[i]);
    i++;
  }
}
