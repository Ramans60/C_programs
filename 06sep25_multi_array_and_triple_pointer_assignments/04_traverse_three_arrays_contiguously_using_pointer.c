#include <stdio.h>
int main()
{
   int arr1[5]={3,2,7,5,4};
   int arr2[5]={0,9,1,8,6};
   int arr3[5]={15,11,19,17,12};
   int *ptr=&arr1[0];
   int i;
   for (i=0; i<21; i++)
   {
      printf("%u %d\n",ptr,*ptr);
      ptr++;
   }
}

