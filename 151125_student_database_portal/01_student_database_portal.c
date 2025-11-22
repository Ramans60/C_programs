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
    char st[20];
    char dt[23];
    int pc;
};
struct det
{
    int height;
    int weight;
    char gen[10];
    struct date dob;
    struct add my_add;
};
struct student
{
    int rol_no;
    char name[24];
    float marks[3];
    struct det my_pd;
};
int main()
{
    int i = 0, j, k = 1, x, z, a = 1;
    struct student s[1000];
    int y = 0;
    printf("==Welcome to Abc metriculation school==\n");
    printf("----------------------------------------\n");
    printf("----------------------------------------\n");
    printf("\nHonesy!           Reliability!            Sincerity!\n");
    printf("----------       -----------------        ----------\n\n");
    printf("#1 - Student details portal , #2 - View Student Database , #3 - Search student\n");
    printf("Enter a value : ");
    scanf("%d", &x);
    if (x == 1)
    {
        printf("Enter student count : ");
        scanf("%d", &z);
        int start = y;
        y = y + z;
        for (i = start; i < y; i++)
        {
            printf("==Welcome to Abc metriculation school==\n");
            printf("----------------------------------------\n");
            printf("----------------------------------------\n");
            printf("\nHonesy!           Reliability!            Sincerity!\n");
            printf("----------       -----------------        ----------\n\n");
            printf("Enter student %d details\n", k);
            printf("---------------------------------\n");
            printf("Enter Roll No : ");
            scanf("%d", &s[i].rol_no);
            printf("Enter student Name : ");
            scanf("%s", s[i].name);
            printf("Enter your Marks :\n");
            printf("----------------\n");
            for (j = 0; j < 3; j++)
            {
                printf("Sub - %d :", j + 1);
                scanf("%f", &s[i].marks[j]);
            }
            printf("\n# Enter your personal details #\n");
            printf("---------------------------------\n");
            printf("Enter your Height : ");
            scanf("%d", &s[i].my_pd.height);
            printf("Enter your Weight : ");
            scanf("%d", &s[i].my_pd.weight);
            printf("Enter your gender : ");
            scanf("%s", s[i].my_pd.gen);
            printf("Enter your Date Of Birth : \n");
            printf("----------------------------\n");
            printf("Date : ");
            scanf("%d", &s[i].my_pd.dob.day);
            printf("Month : ");
            scanf("%d", &s[i].my_pd.dob.month);
            printf("Year : ");
            scanf("%d", &s[i].my_pd.dob.year);
            printf("\n# Enter Your Address #\n");
            printf("----------------------------\n");
            printf("Enter Door no : ");
            scanf("%d", &s[i].my_pd.my_add.d_no);
            printf("Enter your Street Name : ");
            scanf("%s", s[i].my_pd.my_add.st);
            printf("Enter your District : ");
            scanf("%s", s[i].my_pd.my_add.dt);
            printf("Enter your Pincode : ");
            scanf("%d", &s[i].my_pd.my_add.pc);
            printf("---------------------------------------------------------------------------------------------------------------------------------------\n\n");
            k++;
        }
    }
    else if (x == 2)
    {
        printf("==Welcome to Abc metriculation school==\n");
        printf("----------------------------------------\n");
        printf("----------------------------------------\n");
        printf("\nHonesy!           Reliability!            Sincerity!\n");
        printf("----------       -----------------        ----------\n\n");
        printf("## Student DataBase ##\n");
        printf("---------------------------------------------------------------------------------------------------------------------------------------\n\n");
        if (y == 0)
        {
            printf("No student data found.\n");
            return 0;
        }
        printf("| s.no | Roll.no | Name | Marks | Height | Weight | Gender | DOB | Door no | Street | District | Pincode |\n");
        for (i = 0; i < y; i++)
        {
            printf("%d | %d | %s |   %f   %f   %f | %d | %d | %s | %d-%d-%d | %d | %s | %s | %d\n",
                   a,
                   s[i].rol_no,
                   s[i].name,
                   s[i].marks[0], s[i].marks[1], s[i].marks[2],
                   s[i].my_pd.height,
                   s[i].my_pd.weight,
                   s[i].my_pd.gen,
                   s[i].my_pd.dob.day, s[i].my_pd.dob.month, s[i].my_pd.dob.year,
                   s[i].my_pd.my_add.d_no,
                   s[i].my_pd.my_add.st,
                   s[i].my_pd.my_add.dt,
                   s[i].my_pd.my_add.pc);

            a++;
        }
    }
    else if (x == 3)
    {
        int r, found = 0;
        printf("Enter Roll No to search : ");
        scanf("%d", &r);
        for (i = 0; i < y; i++)
        {
            if (s[i].rol_no == r)
            {
                found = 1;
                printf("\n### STUDENT FOUND ###\n");
                printf("Roll No : %d\n", s[i].rol_no);
                printf("Name    : %s\n", s[i].name);
                printf("Marks   : %.2f %.2f %.2f\n", s[i].marks[0], s[i].marks[1], s[i].marks[2]);
                printf("Height  : %d\n", s[i].my_pd.height);
                printf("Weight  : %d\n", s[i].my_pd.weight);
                printf("Gender  : %s\n", s[i].my_pd.gen);
                printf("DOB     : %d-%d-%d\n", s[i].my_pd.dob.day, s[i].my_pd.dob.month, s[i].my_pd.dob.year);
                printf("Address : %d, %s, %s - %d\n",
                       s[i].my_pd.my_add.d_no,
                       s[i].my_pd.my_add.st,
                       s[i].my_pd.my_add.dt,
                       s[i].my_pd.my_add.pc);
                break;
            }
        }

        if (!found)
        {
            printf("No student found with Roll No %d\n", r);
        }
    }
}
