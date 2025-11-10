#include <stdio.h>
int main()
{
   int arr1[5]={3,2,7,5,4};
   int arr2[5]={0,9,1,8,6};
   int *ptr=&arr1[0];
   int i;
   for (i=0; i<10; i++)
   {
      printf("%u %d\n",ptr,*ptr);
      ptr++;
   }
}
