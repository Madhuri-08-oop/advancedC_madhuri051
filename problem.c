                                 // print hello world//

// # include<stdio.h>
// int main()
// {
//     printf("hello world!");
// }

                        // read integer/float/char and print it//

// # include<stdio.h>
// int main()
// {
//     int num;
//     char ch;
//     float f;
//     printf("enter the integer:");
//     scanf("%d", &num);
//     printf("enter the character:");
//     scanf(" %c", &ch);
//     printf("enter the float:");
//     scanf("%f", &f);

//     printf("\ninteger=%d", num);
//     printf("\ncharcater=%c", ch);
//     printf("\nfloat=%2f", f);

//     return 0;
// }

                     // swap two no using a temprary variable//

#include<stdio.h>
int main()
{
    int a=10,b=20,temp;
    printf("before swapping:");
    scanf("a=%d,b=%d\n",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("after swapping:");
    printf("a=%d,b=%d\n",a,b);
    return 0;
}                
