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
    int i,j,k,l;
    struct student s[2][2]={                         
                             {
                               {11,"Abc",{
                                           {67,34},
                                           {34,87}
                                         },{175,60,'M',{12,10,2024},{13,5,2025},{67,"bxc","dpi",635238}}},
                               {12,"Bsd",{
                                           {56,34},
                                           {34,65}
                                         },{167,76,'M',{5,4,2025},{14,3,2004},{56,"dfg","gdg",613554}}}
                             },
                             {           
                               {13,"Aew",{
                                          {23,53},
                                          {44,56}
                                         },{167,49,'M',{24,7,2003},{24,3,2024},{34,"dsgf","dpj",634943}}},
                               {14,"Gsd",{
                                          {45,23},
                                          {43,34}
                                         },{134,67,'M',{12,3,2012},{3,4,2010},{52,"sdf","fsd",643443}}}
                             }                          
                          };
    struct student (*p)[2] = s;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\n",p[i]->rol_no);
            //*p++;
        }
    }
}
