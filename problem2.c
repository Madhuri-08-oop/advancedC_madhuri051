                          // factorial of a number

#include <stdio.h>

int main()
{
    int n, i;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial = %d", fact);

    return 0;
}

                        // fibonacci series
#include <stdio.h>
int main()
{
    int n, i;
    int num1 = 0, num2 = 1, num3;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("%d %d ", num1, num2);
    for(i = 3; i <= n; i++)
    {
        num3 = num1 + num2;
        printf("%d ", num3);

        num1 = num2;
        num2 = num3;
    }
    return 0;
}
                   //  prime no or not
#include<stdio.h>
int main()
{
    int divi = 23456789;
    int temp, rem;
    for(temp = divi; temp > 0; temp = temp / 10)
    {
        rem = temp % 10;
        if(rem == 2 || rem == 3 || rem == 5 || rem == 7)
        {
            printf("Prime digit = %d\n", rem);
        }
    }
    return 0;
}
                      //  print all prime no btw 1 to N
#include<stdio.h>
int main()
{
    int n;
    int temp, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(temp = n; temp > 0; temp = temp / 10)
    {
        rem = temp % 10;
        if(rem == 2 || rem == 3 || rem == 5 || rem == 7)
        {
            printf("Prime digit = %d\n", rem);
        }
    }
    return 0;
}
                       //  palindrome number
#include<stdio.h>
int main()
{
    int num, temp, rem, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(temp = num; temp > 0; temp = temp / 10)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
    }
    if(num == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
    return 0;
}
                   // armstrong no
#include<stdio.h>
int main()
{
    int num, temp, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(temp = num; temp > 0; temp = temp / 10)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
    }
    if(sum == num)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
              // strong number
#include<stdio.h>
int main()
{
    int num, temp, rem, sum = 0, i, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(temp = num; temp > 0; temp = temp / 10)
    {
        rem = temp % 10;
        fact = 1;
        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
    }
    if(sum == num)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}
            // reverse integer
#include<stdio.h>
int main()
{
    int num, temp, rem, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(temp = num; temp > 0; temp = temp / 10)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
    }
    printf("Reverse = %d", rev);
    return 0;
}
         // sum of digit of a no
#include<stdio.h>
int main()
{
    int num, temp, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(temp = num; temp > 0; temp = temp / 10)
    {
        rem = temp % 10;
        sum = sum + rem;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}
           // find the HCF and LCM of a no
 #include <stdio.h>
int main()
{
    int n1, n2, hcf, lcm, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    for(i = 1; i <= n1 && i <= n2; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    lcm = (n1 * n2) / hcf;
    printf("HCF = %d\n", hcf);
    printf("LCM = %d\n", lcm);
    return 0;
}
       // find the largest and smallest no in an array
#include<stdio.h>
int main()
{
    int arr[100];
    int i,n,min,max;
    printf("enter the num of elements : ");
    scanf("%d",&n);
    printf("enter %d elements of array :\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("elements of array :\n");
    for(i=0;i<n;i++)
    {
    printf("%d",arr[i]);
    }
    min=max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
      min=arr[i];
    }
    printf(" largest element in an array: %d",max);
    printf("smallest element in an array:%d ",min);
    return 0;
}
         // insertion of an element
# include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int n=5;
    int i;
    int pos=4;
    int element=35;

    for(i=4;i>=4;i++)  
    {
        arr[i+1]=arr[i];
    }
    arr[4]=element;
    n++;
    printf("array after insertion:\n");
    for(i=0;i<n;i++)
    {
    printf("%d",&arr[i]);
    }
    return 0;
}
    // deletion of an ELement
# include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int n=5;
    int pos=3;
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    for(i=3;i<4;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("array after deletion:\n");
    for (i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
     // reverse an array
#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
        // linear search
#include <stdio.h>
int main()
{
    int arr[100],i,n,target,flag=0;
    printf("enter the no of elemets in an array: ");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the target value:");
    scanf("%d",&target);

    for (i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
        printf("element found at index %d,i");
        }
        flag=1;
        break;
    }
    if(flag==0)
    {
        printf("the element is not found");
    }
    return 0;

}
                                  // merged two arrays//
#include<stdio.h>
int main()
{
    int i,j,n1,n2,temp;
    int arr1[4]={12,13,14,15};
    int arr2[3]={2,4,6};
    int arr3[7];
    n1=4;
    n2=3;
    for(i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=0;i<n2;i++)
    {
        arr3[n1+i]=arr2[i];
    }
    for(i=0;i<n1+n2-1;i++)
    {
      for(j=i+1;j<n1+n2;j++)
      {
        if(arr3[i]>arr3[j])
        {
          temp=arr3[i];
          arr3[i]=arr3[j];
          arr3[j]=temp;
        }
      }
    }
    printf("\n merged array is:\n");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",arr3[i]);
    }
    return 0;
}            
                // remove duplicate element
#include <stdio.h>

int main()
{
    int arr[100], n, i, j, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;   
                j--;  
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
       // sort an array
// #include <stdio.h>
int main()
{
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int target = 50;
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("Element not found");
    return 0;
}
 
