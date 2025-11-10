#include <stdio.h>
int main()
{
    struct student 
    {
        int rol_no;
        char name;
        float marks[5];
    };
    int i,j,k;
    struct student s[3];
    for (i=0; i<3; i++){
        printf("Enter student roll.no and name \n");
        scanf("%d %c",&s[i].rol_no , &s[i].name);
        printf("Enter student marks\n");
        for(j=0; j<5; j++)
        {
            scanf("%g",&s[i].marks[j]);
        }
    }
    for (i=0; i<3; i++){
        printf("\n%d %c \n",s[i].rol_no,s[i].name);
        printf("student marks :\n ");
        for(j=0; j<5; j++)
        {
            printf("%g ",s[i].marks[j]);
        }
    }
}
