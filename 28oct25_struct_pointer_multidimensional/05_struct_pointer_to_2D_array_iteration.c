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
                          {12,'A',59},
			  {13,'B',88},
			  {14,'C',65}
                        };
   int i;
   struct student *p = &s[0];
   float x = p->mark;
   char c = p->name;
   for(i=0; i<3; i++)
   {
      if(p->mark > x)
      {
	 c=p->name;
	 x=p->mark;
      }
      p++;
   }
   printf("Highest mark\n");
   printf("%c =  %g \n",c,x);
}

