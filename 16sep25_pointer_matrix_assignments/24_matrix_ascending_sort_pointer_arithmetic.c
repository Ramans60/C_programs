#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    int i,j,k,l,x;
    printf("Acending order\n");
    for(i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                for(l=0; l<3; l++)
                {
                    if(*(arr[i]+j)<*(arr[k]+l))
                    {
                        x=*(arr[i]+j);
                        *(arr[i]+j)=*(arr[k]+l);
                        *(arr[k]+l)=x;
                    }
                }
            }
        }
    }
    for(i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d \n",*(arr[i]+j));
        }
    }
}


