#include <stdio.h>


void bubble(int array[], int length)
{
   int i = 0;
   int temp;
   for(;i < length - 1; i++)
   {
     int j = 0;
     for(;j < length - i - 1; j++)
     {
         if(array[j] > array[j + 1])
         {
            temp = array[j + 1];
            array[j + 1] = array[j];
            array[j] = temp;
         }
     }
   }
}

void main(int argc, char* argv)
{
  int  array[] = {10,2,1,71,0,0,0,71,52,35,47,57};
  int length = sizeof(array)/sizeof(array[0]);
  bubble(array, length);
  int i = 0;
  while(i < length - 1)
  {
    printf("%d ", array[i]);
    i++;
  }
}
