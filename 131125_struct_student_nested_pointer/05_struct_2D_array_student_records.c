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
    struct student s[2][2] = {
                               {
                                 {12,"Abc", {{67,43},{45,67}}, {175,56,'M',{12,9,2032},{23,6,2020},{67,"fgh","hdd",685940}}},
                                 {13,"Bcd", {{86,45},{54,43}}, {165,76,'F',{14,6,1990},{20,9,2023},{96,"gfd","eyh",656456}}}
                               },
                               {
                                 {14,"dfg", {{55,64},{65,43}}, {179,45,'M',{30,7,1999},{23,4,2030},{42,"fsh","jyt",659434}}},
                                 {15,"Efg", {{45,34},{54,76}}, {156,56,'F',{23,8,2020},{20,4,2021},{54,"vbn","yth",636356}}}
                               }         
                            };
    struct student (*p)[2][2]=&s;
    for (i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\n", (*p)[i][j].rol_no);
        }
    }
}
