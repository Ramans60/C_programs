#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,9,3}
                  };
    int i,j,x;
    int *ptr=&arr[0][0];
    int *ptr1=ptr;
    int *ptr2=ptr;
    printf(" %u \n",ptr);
    printf(" %u \n",ptr1);
    printf(" %u \n",ptr2);
    
    for (i=0; i<9 ;i++)
    {
        printf(" %u\n",*ptr1);
        ptr1++;
    }

    printf("\n");
    ptr1--;
    for (i=0; i<9 ;i++)
    {
        printf(" %u\n",*ptr1);
        ptr1--;
    }
  printf("\n");


  for(i=0; i<9; i++)
  {
      for(j=0; j<9; j++)
      {
          if( ptr1 > ptr2)
          {
              x=*ptr1;
              ptr1=ptr2;
              ptr2=x;
          }
      }
  }
}
