#include <stdio.h>
struct student 
{
   int rol_no;
   char name;
   float mark;
};
int main()
{
   struct student s[3] ={
                          {12,'A',99},
			  {13,'B',88},
			  {15,'C',77}
                       };
   struct student (*ptr)[3] = &s;
   struct student *ptr1 = (struct student *)ptr;
   int i;
   for (i=0; i<3; i++)
   {
      printf("%d \n",ptr1->rol_no);
      ptr1++;
   }
}
