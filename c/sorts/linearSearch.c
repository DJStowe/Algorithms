#include <stdio.h>


int linearSearch(int array[], int length, int key)
{
   int i = 0;
   for(;i < length; i++)
   {
     if(array[i] == key)
        return i;
   }
   return -1;
}

void main(int argc, char* argv)
{
  int  array[] = {10,2,1,1,0,0,0,71,52,35,47,57};
  int length = sizeof(array)/sizeof(array[0]);
  int key = 71;
  int result = linearSearch(array, length, key);
  int i = 0;
  printf("%d",result);
}