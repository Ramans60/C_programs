#include <stdio.h>
struct student
{
    int rol_no;
    char name;
    int mark[3][3];
};
void fun(int, char, int *);
int main()
{
    struct student s[3]={
                          {12,'A',{
                                    {99,56,23},
                                    {76,34,76},
                                    {43,76,23}
                                  }
                          }, 
                          {13,'B',{
                                    {76,43,87},
                                    {69,34,78},
                                    {34,87,34}
                                  }
                          },
                          {14,'c',{
                                    {77,54,23},
                                    {65,32,76},
                                    {54,89,43}
                                  }
                          }
                      };
      int i,j,k;
      for(i=0; i<3; i++)
      {
          fun(s[i].rol_no,s[i].name,&s[i].mark[0][0]);
      }
}
void fun(int a, char b, int *c)
{
    int i,j,k;
    printf("%d\n",a);
    printf("Name = %c\n\n",b);
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%u\n",*c);
            c++;
        }
    }
}
