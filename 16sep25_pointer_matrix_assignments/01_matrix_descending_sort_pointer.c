#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
     int *ptr=&arr[0][0];
     printf("Decending order \n");
     int i,j,x;
     for (i=0; i<9; i++)
     {
         for(j=0; j<9; j++)
         {
             if (*(ptr+i)>*(ptr+j))
             {
                 x=*(ptr+i);
                 *(ptr+i)=*(ptr+j);
                 *(ptr+j)=x;
             }
         }
     }
     for (i=0; i<9; i++)
     {
         printf("%d \n",*(ptr+i));
     }
}
