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
    char street[15];
    char dist[15];
    int pincode;
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
    char name[14];
    float marks[3];
    struct det my_pd;
};
int main()
{
    int i;
    struct student s={12,"Abc",{89,76,45},{75,60,'M',{12,12,2009},{13,11,2020},{67,"bdc","Dpi",636808}}};
    printf("%d\n%s\n",s.rol_no,s.name);
    for(i=0; i<3; i++){
        printf("%g ",s.marks[i]);
    }
    printf("%d\n%d\n%c\n",s.my_pd.height,s.my_pd.weight,s.my_pd.gen);
    printf("%d-%d-%d\n",s.my_pd.dob.day,s.my_pd.dob.month,s.my_pd.dob.year);
    printf("%d-%d-%d\n",s.my_pd.doj.day,s.my_pd.doj.month,s.my_pd.doj.year);
    printf("%d\n%s\n%s\n%d\n",s.my_pd.h_add.d_no,s.my_pd.h_add.street,s.my_pd.h_add.dist,s.my_pd.h_add.pincode);
}
