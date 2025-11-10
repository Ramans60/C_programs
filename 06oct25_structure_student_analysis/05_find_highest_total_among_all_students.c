#include <stdio.h>
int main()
{
    struct student
    {
        int rol_no;
        char name;
        float mark[3][3];
    };
    int i,j,k,l,m,n=0,p;
    float y,a,b;
    struct student s[3]={
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
    for(i=0,n=1; i<3; i++,n++)
    {
        float z=0;
        printf("\n%d %c\n\n",s[i].rol_no,s[i].name);
        for (j=0,l=1; j<3; j++,l++)
        {
            float x=0;
            printf("sem - %d\n",l);
            for(k=0; k<3; k++)
            {
                printf("%g  ",s[i].mark[j][k]);
                x=x+s[i].mark[j][k];
            }
            z=z+x;
            float a=x/3;
            printf("\nTotal = %g\n",x);
            printf("\nAverage = %f\n",a);
            if(j==0)
                y=x;
            if(x > y){
                m=j;
                y = x;
            }
        }
        if(i==0)
            p=z;
        if (z>p){
            p=z;
        }
        printf("highest score =%g\n",y);
        printf("Student-%d Total = %g\n",n,z);
    }
    printf("highest score = %d \n",p);
}a
