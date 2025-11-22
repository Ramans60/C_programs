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
    int i,j,k;
    struct student s[2]={
                          {12,"Abc",{
                                      {67,34},
                                      {34,87}
                                    },{175,60,'M',{12,10,2024},{13,5,2025},{67,"bxc","dpi",635238}}},
                          {13,"Aew",{
                                      {23,53},
                                      {44,56}
                                    },{167,49,'M',{24,7,2003},{24,3,2024},{34,"dsgf","dpj",634943}}}
                        };
    struct student *p = s; 
    for(i=0; i<2; i++)
    {
        printf("\nSTUDENT  DETAILS \n");
        printf("Roll No     : %d\n", p->rol_no);   
        printf("Name        : %s\n", p->name);
        printf("##marks\n");
        for(int r = 0; r < 2; r++) 
        { 
            for(int c = 0; c < 2; c++) 
            {            
                printf("%g ",p->marks[r][c]);
                }       
                } 
                printf("\n  Height    : %d\n", p->my_pd.height);
                printf("  Weight    : %d\n", p->my_pd.weight);
                printf("  Gender    : %c\n", p->my_pd.gen);
                printf("  DOB       : %d-%d-%d\n", p->my_pd.dob.day, p->my_pd.dob.month, p->my_pd.dob.year);
                printf("  DOJ       : %d-%d-%d\n", p->my_pd.doj.day, p->my_pd.doj.month, p->my_pd.doj.year);
                printf("  Door No   : %d\n", p->my_pd.h_add.d_no);
                printf("  Street    : %s\n", p->my_pd.h_add.st);
                printf("  District  : %s\n", p->my_pd.h_add.dist);
                printf("  Pincode   : %d\n", p->my_pd.h_add.pc);
                p++;
     }
}
