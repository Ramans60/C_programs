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
    printf("Sum of marks each student\n");
    int arr[3];
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
        int x=0;
        for(j=0; j<5; j++)
        {
            x=x+s[i].marks[j];
        }
        arr[i]=x;
    }
    printf("Sum of marks each student\n");
    for(i=0; i<3; i++)
        printf("%d\n",arr[i]);
}
