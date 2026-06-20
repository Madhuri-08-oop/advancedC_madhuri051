                         // (3) insertion //   
// # include<stdio.h>
// int main()
// {
//     int arr[]={10,20,30,40,50};
//     int n=5;
//     int i;
//     int pos=4;
//     int element=35;

//     for(i=4;i>=4;i++)  
//     {
//         arr[i+1]=arr[i];
//     }
//     arr[4]=element;
//     n++;
//     printf("array after insertion:\n");
//     for(i=0;i<n;i++)
//     {
//     printf("%d",&arr[i]);
//     }
//     return 0;
// }

                        // 4 deletion //
// # include<stdio.h>
// int main()
// {
//     int arr[]={10,20,30,40,50};
//     int n=5;
//     int pos=3;
//     int i;
    
//     for(i=0;i<n;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     for(i=3;i<4;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     n--;
//     printf("array after deletion:\n");
//     for (i=0;i<n;i++)
//     {
//         printf("%d",arr[i]);
//     }
// }
                             // 6 total equlilrium index
// # include<stdio.h>
// int main()
// {
//     int arr[]={1,2,4,8,4,3};
//     int n=6;
//     int i,j,k;
//     int suml,sumr;
//     for(i=1;i<5;i++)
//     {
//         suml=0;
//         sumr=0;
//         for(j=i-1;j>=0;j--)
//         {
//             suml+=arr[j];
//         }

//         for(k=i+1;k<n;k++)
//         {
//             sumr+=arr[k];
//         }
//         if(suml==sumr)
//         {
//             printf("equilibrium index=%d",i);
//             break;
//         }
//     }
//     return 0;
// }
 
                        // transpose 5*3 matrix//
// # include<stdio.h>
// int main()
// {
//     int arr[5][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9},
//         {10,11,12},
//         {13,14,15}
//     };
//     int i,j;
//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("%d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n transpose matrix:\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<5;j++)
//         {
//             printf("%d",arr[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

                        // reverse an array anticlockwise//
// #include<stdio.h>
// int main()
// {
//   int arr[]={1,2,3,4,5};
//   int n=5;
//   int temp=arr[0];
//   int i;
  
//   for(i=0;i<4;i++)
//   {
//     arr[i]=arr[i+1];
//   }
//   arr[4]=temp;
  
//   printf("array after anticlockwise rotation:\n");
//   for(i=0;i<5;i++)
//   {
//     printf("%d",arr[i]);
//   }
//   return 0;
// }
    
         // write a program to take input from the user as no of rows and print a pyramid upto twice of
         // the input...
// #include<stdio.h> 
// int main()                                                      
// {
//   int i,j,n;
//   printf("enter no of rows:");
//   scanf("%d",&n);
  
//   for(i=1;i<=n;i++)
//   {
//     for (j=1;j<=(2*i-1);j++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }
         
       // write a c program to check the sum whether the sum of all the diagonals of a matrix
       // is equal to the sum of
       //(1) boundary element
       //(2) the sum of the corners element of the matrix

#include<stdio.h>
int main()
{
  int i,j,n=3;
  int diagonalsum=0;
  int cornersum=0;
  int boundarysum=0;
  int arr[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9},
  };
  for(i=0;i<3;i++)
  {
    diagonalsum+=arr[i][i];
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i==0||i==3-1||j==0||j==3-1)
      boundarysum+=arr[i][j];
    }
  }
cornersum=arr[0][0]+arr[0][n-1]+arr[n-1][0]+arr[n-1][n-1];
printf("\n diagonalsum=%d",diagonalsum);
printf("\n boundarysum=%d",boundarysum);
printf("\n cornersum=%d",cornersum);
if(diagonalsum==boundarysum)
printf("\ndiagpnal sum is equal to boundary sum");
else
printf("\ndiagonal sum is not equal to boundary sum");
if(diagonalsum==cornersum)
printf("\ndiagonal sum is equal to corner sum");
else
printf("\ndiagonal sum is not equal to corner sum");
  
  return 0;
}