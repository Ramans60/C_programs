#include <stdio.h>
int main()
{
    int i,k;
    int arr[5]={3,2,7,5,4};
    fun(&arr[0]);
}
fun (int a[])
{
    int i,j,x;
    for (i=0 ;i<5 ;i++)
    {
        for (j=i+1 ;j<5 ;j++)
        {
            if (a[i] < a[j])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
    for(i=0 ;i<5 ;i++)
    {
        printf("%d\n", a[i]);
    }
}
