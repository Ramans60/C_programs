#include <stdio.h>
int main()
{
    int arr[3][2][2]={
                       {
                           {3,1},
                           {8,5}
                       },
                       {
                           {2,4},
                           {7,6}
                       },
                       {
                           {10,11},
                           {9,12}
                       }
                    };
   int i,j,k,l,m,n,x;
   for(i=0; i<3; i++)
       for(j=0; j<2; j++)
           for(k=0; k<2; k++)
               for(l=0; l<3; l++)
                   for(m=0; m<2; m++)
                       for(n=0; n<2; n++){
                           if(i==0&&l==0)
                           {
                               if(j==0)
                               {
                                   if(arr[i][j][k]<arr[l][m][n])
                                   {
                                       x=arr[i][j][k];
                                       arr[i][j][k]=arr[l][m][n];
                                       arr[l][m][n]=x;
                                   }
                               }
                               else if(j==1)
                               {
                                   if(arr[i][j][k]<arr[l][m][n])
                                   {
                                       x=arr[i][j][k];
                                       arr[i][j][k]=arr[l][m][n];
                                       arr[l][m][n]=x;
                                   }
                               }
                               else if(j==2)
                               {
                                   if(arr[i][j][k]<arr[l][m][n])
                                   {
                                       x=arr[i][j][k];
                                       arr[i][j][k]=arr[l][m][n];
                                       arr[l][m][n]=x;
                                   }
                               }
                           }
                           if(i==1&&l==1)
                           {
                               if(j==0)
                               {
                                   if(arr[i][j][k]<arr[l][m][n])
                                   {
                                       x=arr[i][j][k];
                                       arr[i][j][k]=arr[l][m][n];
                                       arr[l][m][n]=x;
                                   }
                               }
                               else if(j==1)
                               {
                               else if(j==2)
                               {
                                   if(arr[i][j][k]<arr[l][m][n])
                                   {
                                       x=arr[i][j][k];
                                       arr[i][j][k]=arr[l][m][n];
                                       arr[l][m][n]=x;
                                   }
                               }
                           }
                           if(i==2&&l==2)
                           {
                               if(j==0)
                               {
                                   if(arr[i][j][k]<arr[l][m][n])
                                   {
                                       x=arr[i][j][k];
                                       arr[i][j][k]=arr[l][m][n];
                                       arr[l][m][n]=x;
                                   }
                               }
                               else if(j==1)
                               {
                                   if(arr[i][j][k]<arr[l][m][n])
                                   {
                                       x=arr[i][j][k];
                                       arr[i][j][k]=arr[l][m][n];
                                       arr[l][m][n]=x;
                                   }
                               }
                               else if(j==2)
                               {
                                   if(arr[i][j][k]<arr[l][m][n])
                                   {
                                       x=arr[i][j][k];
                                       arr[i][j][k]=arr[l][m][n];
                                       arr[l][m][n]=x;
                                   }
                               }
                           }
                       }
   for(i=0; i<3; i++)
       for(j=0; j<2; j++)
           for(k=0; k<2; k++)
               printf("%d\n",arr[i][j][k]);
}
