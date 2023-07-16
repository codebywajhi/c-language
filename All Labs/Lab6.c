// QNO: 1 program to print t multiplication table.
#include <stdio.h>
int main()
{
    int n, i;
    printf("enter a number whose multiplication table is to be    printed\n");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, i * n);
    }
    return 0;
}
// QNO: 2 program  that takes character input. Terminate when ‘X’ is pressed.
#include <stdio.h>
int main()
{
    char c;
    for (;;)
    {
        printf("Press any key, Q to quit: \n ");
        scanf("%c", &c);
        if (c == 'Q')
            break;
    }
} // Loop exits only when 'Q' is pressed
// Output:
// QNO:3 PROGRAM TO GENERATE ODD SERIES
#include <stdio.h>
int main()
{
    int counter;
    printf("Odd numbers till 50 \n");
    for (counter = 1; counter <= 50; counter++)
    {
        if (counter % 2 == 1)
        {
            printf("%d ", counter);
        }
    }
    return 0;
}
//  Program to generate even series till 50.
#include <stdio.h>
int main()
{
    int i;
    printf("Even numbers between 1 to 50 \n");
    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
        }
        printf("%d ", i);
    }
    return 0;
}
// Qno: 4 Program to print series 1,2,3,4…………………….30.
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d : \n", n);
    for (i = 1; i <= n; i++)
    {
        printf("\n%d", i);
    }
    return 0;
}

//  Program to print following series 1,2,2,3,3,4,4,5,…..50
#include <stdio.h>
int main()
{
    int count = 1;
    for (int i = 1; i <= 50; i++)
    {
        printf("%d, ", count);
        if (i % 2 == 0)
        {
            count++;
        }
    }
    return 0;
}
//  Program to print following series 0,1,1,2,3,5,8,…….100
#include <stdio.h>
int main()
{
    int i, n;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    for (i = 3; i <= n; ++i)
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}
// Question: 5 write a program to print square less than 1000.
// Method 1:
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    while (n * n <= 1000)
    {
    }
    if (n * n < 1000)
    {
    }
    printf("\n%d*%d=", n, n);
    n *= n;
    printf("%d", n);
    return 0;
}
// Method: 2
#include <stdio.h>
int main()
{
    int i, N;
    printf("Enter N : ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        printf("%d ", i * i);
    }
    return 0;
}
// Question: 6  Write a program that takes character input unless Enter is pressed and print total number of
// inputs by the user.
#include <stdio.h>
int main()
{
    char ch;
    int count = 0;
    printf("Enter characters (press Enter to finish):\n");
    while ((ch = getchar()) != '\n')
    {
        count++;
    }
    printf("Total number of inputs: %d\n", count);
    return 0;
}