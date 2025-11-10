#include <stdio.h>
int main()
{
    struct student
    {
        int rol_no;
        char name;
        float mark[3][3];
    };
    int i,j,k,l;
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
        printf("\n%d %c\n\n",s[i].rol_no,s[i].name);
        for (j=0,l=1; j<3; j++,l++)
        {
            int x=0;
            printf("sem%d\n",l);
            for(k=0; k<3; k++)
            {
                printf("%g  ",s[i].mark[j][k]);
                x=x+s[i].mark[j][k];
            }
            printf("\nTotal = %d\n\n",x);
        }
    }
}
