#include <stdio.h>
int main()
{
    struct student 
    {
        int rol_no;
        char name;
        float mark[3][3];
    };
    int i,j,k,l,x,y,z;
    struct student s[3]={
                          {1,'A',{
                                   {78,76,67},
                                   {59,56,79},
                                   {75,56,45}
                                 },
                          },
                          {2,'B',{
                                   {87,89,65},
                                   {76,87,54},
                                   {78,65,87}
                                 },
                          },
                          {3,'C',{                                 
                                     {45,23,87},
                                     {43,87,34},
                                     {87,84,78}
                                 }
                          }
                       };
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
            }
        }
    }
}
