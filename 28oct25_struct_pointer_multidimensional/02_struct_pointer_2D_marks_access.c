#include <stdio.h>
struct student
{
   int rol_no;
   char name;
   float mark[3][3];
};
int main()
{
   struct student s[3]={
                         {12,'A',{
                                   {77,54,76},
                                   {58,68,54},
                                   {84,29,59}
                                 }
                         },
                         {13,'B',{
                                   {88,45,72},
                                   {82,63,93},
                                   {25,57,58}
                                 }
                         },
                         {14,'C',{
                                   {99,43,59},
                                   {24,86,23},
                                   {47,57,85}
                                 }
                         }
                       }; 
   int i,j,k;
   struct student *p = s;
   for(i=0; i<3; i++)
   {
      printf("roll_no : %d\nname : %c \n",p->rol_no,p->name);
      printf("Marks :\n");
      for(j=0; j<3; j++)
      {
          for(k=0; k<3; k++)
          {
              printf(" %g",p->mark[j][k]);
          }
      }
      p++;
      printf("\n\n");
   }
}
