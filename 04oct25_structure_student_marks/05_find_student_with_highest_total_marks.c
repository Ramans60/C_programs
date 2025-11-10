#include <stdio.h>
int main()
{
    struct student 
    {
        int rol_no;
        char name;
        float marks[5];
    };
    int i,j,k,y,z;
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
    y=arr[0];
    for(i=0; i<3; i++)
    {
        if (arr[i]>y){
            y=arr[i];
            z=i;
        }
    }
    printf("\n");
    printf("%d student %c marks was high total = %d\n",s[z].rol_no,s[z].name,y);
}
