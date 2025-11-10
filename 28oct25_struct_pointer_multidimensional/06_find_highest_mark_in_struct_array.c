#include <stdio.h>
struct student 
{
   int rol_no;
   char name;
   float mark;
};
void fun(struct student *);
int main()
{
   struct student s[3]= {
                          {11,'A',43},
			  {12,'B',87},
			  {13,'C',91}
                        };
   fun(s);
}
void fun(struct student *p)
{
   char c =p->name;
   float x =p->mark;
   int i;
   for (i=0; i<3; i++)
   {
      if(p->mark > x)
      {
	 x =p->mark;
	 c =p->name;
      }
      p++;
   }
   printf("Highest mark\n");
   printf("%c = %g\n",c,x);
}

