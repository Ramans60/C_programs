#include <stdio.h>
void fun(int, char, (int *)*);
int main()
{
    struct student
    {
        int rol_no;
        char name;
        float mark[3][3];
    };
    struct student s1[3]={
                          {10,'A',{
                                    {35,47,57},
                                    {33,64,72},
                                    {54,23,45}
                                  }},
                          {11,'B',{
                                    {54,56,76},
                                    {55,34,39},
                                    {65,43,23}
                                  }},
                          {12,'C',{
                                    {45,65,78},
                                    {56,24,45},
                                    {65,45,29}
                                  }}
                        };
    int i,j,k,l,m,n=0,p;
    for(i=0; i<3; i++)
    {
        fun(s1[i].rol_no,s1[i].name,&s1[0].mark[0][0]);
    }
}
void fun(int a,char b, (int *)*c)
{
    int i,j;
    printf("\n%d %c\n\n",a,b);
    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%u\n",*(*c));
        }
    }
}
