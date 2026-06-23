//                                  // print hello world//
// # include<stdio.h>
// int main()
//  {
//     printf("hello world!");
//  }

//                         // read integer/float/char and print it//

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

//                      // swap two no using a temprary variable//

// #include<stdio.h>
// int main()
// {
//     int a=10,b=20,temp;
//     printf("before swapping:");
//     scanf("a=%d,b=%d\n",a,b);

//     temp=a;
//     a=b;
//     b=temp;

//     printf("after swapping:");
//     printf("a=%d,b=%d\n",a,b);
//     return 0;
// }                

//                    // celcius to fahreniet//

// # include<stdio.h>
// int main()
// {
//     int c,f;
//     printf("enter thr temperature in celcius:\n");
//     scanf("%d",&c);

//     f=(c*9/5)+32;
//     printf("temperature in fahrenheit=%d,f");
//     return 0;

// }
               
//  # include<stdio.h>
//  int main()
//  {
//     float c,f;
//     printf("enter thr temperature in fahrenheit:\n");
//     scanf("%f",&f);

//     c=(f-32)*5/9;
//     printf("temperature in celcius=%.2f\n",c);
//     return 0;
//  }


//                       //find the area and circumference of a circle//

// # include<stdio.h>
// int main()
// {
//     float a,c,r;
//     printf("enter the radius of a circle:\n");
//     scanf("%f",&r);

//     a=3.14*r*r;
//     c=2*3.14*r;
//     printf("area of circle=%.2f\n",a);
//     printf("circumference of circle=%.2f\n",c);
//     return 0;
// }

//                   // simple interest and compound interest//


// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float p, r, t, si, ci;

//     printf("Enter Principal Amount: ");
//     scanf("%f", &p);
//     printf("Enter Rate of Interest: ");
//     scanf("%f", &r);
//     printf("Enter Time (in years): ");
//     scanf("%f", &t);
//     si = (p * r * t) / 100;
//     ci = p * pow((1 + r / 100), t) - p;

//     printf("\nSimple Interest = %.2f", si);
//     printf("\nCompound Interest = %.2f", ci);
//     return 0;


//                // swap two no without using 3 variable//
                     
// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("After swapping:\n");
//     printf("a = %d\n", a);
//     printf("b = %d\n", b);
//     return 0;
// }     
//                        // check a no is odd or even by modulus operator//                         
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (num % 2 == 0)
//     {
//         printf("%d is Even\n", num);
//     }
//     else
//     {
//         printf("%d is Odd\n", num);
//     }
//     return 0;
// }
//                       // convert days into weeks,years,and days//
// #include <stdio.h>
// int main()
// {
//     int days, years, weeks, rem_days;
//     printf("Enter total number of days: ");
//     scanf("%d", &days);

//     years = days / 365;
//     days = days % 365;

//     weeks = days / 7;
//     rem_days = days % 7;

//     printf("Years = %d\n", years);
//     printf("Weeks = %d\n", weeks);
//     printf("Days = %d\n", rem_days);

//     return 0;
// }
//                           // convert ASCII value of a character//
// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     printf("ASCII value of %c = %d\n", ch, ch);

//     return 0;
// }

//                           //// find different datatypes by sizeof
// #include <stdio.h>

// int main()
// {
//     printf("Size of int = %zu bytes\n", sizeof(int));
//     printf("Size of char = %zu byte\n", sizeof(char));
//     printf("Size of float = %zu bytes\n", sizeof(float));
//     printf("Size of double = %zu bytes\n", sizeof(double));

//     return 0;
// }
//                                 // find the largest of 3 no
// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
//     if (a >= b && a >= c)
//         printf("%d is the largest number.", a);
//     else if (b >= a && b >= c)
//         printf("%d is the largest number.", b);
//     else
//         printf("%d is the largest number.", c);
//     return 0;
// }

//                                      /// leap year or not
// #include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);

//     if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//         printf("%d is a Leap Year\n", year);
//     else
//         printf("%d is Not a Leap Year\n", year);

//     return 0;
// }
//                                  // vowel or consonant//
// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
//         ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
//     {
//         printf("%c is a Vowel\n", ch);
//     }
//     else
//     {
//         printf("%c is a Consonant\n", ch);
//     }
//     return 0;
// }


//                               // roots of quadratic equation
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float a, b, c, d, r1, r2;
//     printf("Enter a, b and c: ");
//     scanf("%f %f %f", &a, &b, &c);

//     d = b * b - 4 * a * c;

//     if (d > 0)
//     {
//         r1 = (-b + sqrt(d)) / (2 * a);
//         r2 = (-b - sqrt(d)) / (2 * a);

//         printf("Roots are real and different.\n");
//         printf("Root 1 = %.2f\n", r1);
//         printf("Root 2 = %.2f\n", r2);
//     }
//     else if (d == 0)
//     {
//         r1 = -b / (2 * a);

//         printf("Roots are real and equal.\n");
//         printf("Root 1 = Root 2 = %.2f\n", r1);
//     }
//     else
//     {
//         printf("Roots are imaginary.\n");
//     }

//     return 0;
// }

//                  // create a simple calculator using switch case
//  #include <stdio.h>

// int main()
// {
//     float a, b, result;
//     char op;

//     printf("Enter first number: ");
//     scanf("%f", &a);

//     printf("Enter operator (+, -, *, /): ");
//     scanf(" %c", &op);

//     printf("Enter second number: ");
//     scanf("%f", &b);

//     switch(op)
//     {
//         case '+':
//             result = a + b;
//             printf("Result = %.2f", result);
//             break;

//         case '-':
//             result = a - b;
//             printf("Result = %.2f", result);
//             break;

//         case '*':
//             result = a * b;
//             printf("Result = %.2f", result);
//             break;

//         case '/':
//             if(b != 0)
//             {
//                 result = a / b;
//                 printf("Result = %.2f", result);
//             }
//             else
//             {
//                 printf("Division by zero is not possible.");
//             }
//             break;

//         default:
//             printf("Invalid operator!");
//     }

//     return 0;
// }                 
                      // character is an digits,alphabet or special character
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("It is an alphabet.\n");

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("It is a vowel.");
        }
        else
        {
            printf("It is a consonant.");
        }
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("It is a digit.");
    }
    else
    {
        printf("It is a special character.");
    }

    return 0;
}

