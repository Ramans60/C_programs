#include <stdio.h>
int main()
{
    struct student
    {
        int rol_no;
        char name;
        float mark[3][3];
    };
    int i,j,k;
    struct student s[3]={
                          {10,'A',{
                                    {35,47,58},
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
    for(i=0; i<3; i++)
    {
        printf("\n%d %c\n",s[i].rol_no,s[i].name);
        for (j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                printf("%g  ",s[i].mark[j][k]);
            }
            printf("\n");
        }
    }
}
