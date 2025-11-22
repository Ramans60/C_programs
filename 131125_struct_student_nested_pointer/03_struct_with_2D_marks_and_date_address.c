#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
struct add
{
    int d_no;
    char st[15];
    char dist[15];
    int pc;
};
struct det
{
    int height;
    int weight;
    char gen;
    struct date dob;
    struct date doj;
    struct add h_add;
};
struct student 
{
    int rol_no;
    char name[15];
    float marks[2][2];
    struct det my_pd;
};
int main()
{
    int i,j;
    struct student s={12,"Abc",{
                                 {89,86},
                                 {54,65}
                               },{75,60,'M',{12,12,2023},{23,10,2021},{67,"sdf","dpi",604842}}};
   struct student *p = &s;
   printf("%d %s\n",p->rol_no,p->name);
   for(i=0; i<2; i++){
       for(j=0; j<2; j++){
           printf("%g\n",p->marks[1][1]);
       }
   }
   printf("hei= %d wei= %d gen= %c\n",p->my_pd.height, p->my_pd.weight, p->my_pd.gen);
   printf("%d-%d-%d\n",p->my_pd.dob.day, p->my_pd.dob.month, p->my_pd.dob.year);
   printf("%d-%d-%d\n",p->my_pd.doj.day, p->my_pd.doj.month, p->my_pd.doj.year);
   //printf("d_no= %dst= %sdist= %spc= %d\n",p->my_pd.);
}
