#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void sleepSort(int array[], int length)
{
  volatile int i = 0;
  for(;i <length; i++)
  {
    if(fork() == 0)
    {
      sleep(array[i]);
      printf("%d ", array[i]);
      exit(0);
    }
  }
  wait(NULL);
  printf("\n");
}
void main(int argc, char * argv)
{
  int  array[] = {10,2,1,1,4,9,9,1,6,5,7,8};
  int length = sizeof(array)/sizeof(array[0]);
  sleepSort(array, length);
}
