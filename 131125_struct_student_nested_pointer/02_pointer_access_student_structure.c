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
    char street[15];
    char dist[15];
    int pincode;
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
    float marks[3];
    struct det my_pd;
};
int main()
{
    int i;
    struct student s={12,"Abc",{89,76,45},{175,50,'M',{12,12,2023},{23,12,2022},{67,"bcd","dpi",636408}}};
    struct student *p = &s;
    printf("%d\n",p->rol_no);
    printf("%s\n",p->name);
    for(i=0; i<3; i++)
    {
        printf("%g\n",p->marks[i]);
    }
    printf("%d\n%d\n%c\n", p->my_pd.height, p->my_pd.weight, p->my_pd.gen);
    printf("%d-%d-%d\n", p->my_pd.dob.day, p->my_pd.dob.month, p->my_pd.dob.year);
    printf("%d-%d-%d\n", p->my_pd.doj.day, p->my_pd.doj.month, p->my_pd.doj.year);
    printf("%d %s %s %d", p->my_pd.h_add.d_no, p->my_pd.h_add.street, p->my_pd.h_add.dist, p->my_pd.h_add.pincode);
}
