#include <stdio.h>
struct student
{
   int rol_no;
   char name[16];
   float marks[3][3];
};
int main()
{
    struct student s[2][2] ={
                              {
                                {12,"Abc",{
                                            {98,67,87},
                                            {76,89,65},
                                            {45,76,78}
                                          }
                                },
                                {13,"Bcd",{
                                            {76,89,54},
                                            {45,89,85},
                                            {34,87,45}
                                           }
                                }
                              },
                              {
                                {14,"Cde",{
                                            {65,67,44},
                                            {32,76,32},
                                            {34,74,58}
                                            }
                                },
                                {15,"Def",{
                                           {75,95,93},
                                           {65,97,46},
                                           {54,84,66}
                                           }
                                }
                              }
                            };
   int i,j,k,l;
   struct student *p = &s[0][0];
   for(i=0; i<2; i++)
   {
       for(j=0; j<2; j++)
       {
           printf("\nroll_no : %d\nname : %s \n",p->rol_no,p->name);
           printf("Marks :\n");
           for(k=0; k<3; k++)
           {
               for(l=0; l<3; l++)
               {
                   printf(" %g",p->marks[k][l]);
               }
           }
           printf("\n\n");
           p++;
       }
   }
}
