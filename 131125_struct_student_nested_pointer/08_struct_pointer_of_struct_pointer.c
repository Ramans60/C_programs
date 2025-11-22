#include <stdio.h>
struct student
{
    int *ptr1;
    float *ptr2;
};
int main()
{
    struct student s1;
    struct student *s_ptr;
    s_ptr=&s1;
    int reg_no=12;
    float mark=89;
    s1.ptr1=&reg_no;
    s1.ptr2=&mark;
    printf("%d\n",*s1.ptr1);
    printf("%f\n",*s_ptr->ptr2);
}
