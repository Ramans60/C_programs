#include <stdio.h>
int main() 
{
    int arr[5]={3,2,7,5,4};
    int i,*p,**q;
    p=arr; 
    q=&p; 
    for (i=0; i<5; i++) 
    {
        printf("%d ", *(*q + i)); 
    }
}
