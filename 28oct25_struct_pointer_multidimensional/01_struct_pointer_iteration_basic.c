#include <stdio.h>
struct student
{
   int rol_no;
   char name;
   float mark[3];
};
int main()
{
   struct student s[3]={
                         {12,'A',{77,54,76}},
                         {13,'B',{88,45,72}},
                         {14,'C',{99,43,59}}
                       }; 
   int i,j;
   struct student *p = s;
   for(i=0; i<3; i++)
   {
      printf("%d %c \n",p->rol_no,p->name);
      for(j=0; j<3; j++)
      {
          printf("%g\n",p->mark[j]);
      }
      p++;
   }
}
