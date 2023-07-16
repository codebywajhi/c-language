// Task 1: write a program to print following
// 1
// 12 /
// 123
// 1234
// 1234

#include <stdio.h>
int main()
{
    int i, j, row;
    printf("\nHow many rows\n");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

// Task 2 write a program to print pattern
// *****
// *****
// *****

#include <stdio.h>
int main()
{

    int i, j;
    for (i = 0; i < 5; i++)
    {
        {
            for (j = 0; j < 5; j++)
                printf(" * ");
        }
        printf("\n");
    }
    return 0;
}

// Task 8: write a program to print inverted pattern.

#include <stdio.h>
int main()
{
    int I, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = rows; i >= 1; --i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("* ");
            printf("\n");
        }
    }
    return 0;
}

// Task 9 : write a program to print rhombus pattern.
#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
        }
        printf(" ");
        for (j = 1; j <= rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// Task write  a program to print alphabetic pattern

#include <stdio.h>
int main()
{
    int i, j;
    char input, alphabet = 'A';
    printf("Enter an uppercase character you want to print in the last row: ");
    scanf("%c", &input);
    for (i = 1; i <= (input - 'A' + 1); ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%c ", alphabet);
        }
        ++alphabet;
        printf("\n");
    }
    return 0;
}

// Task  3 write a program to print Fibonacci series

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

// Task 4:
// Use for-loop to print the multiplication table below:

// 1 2 3 4 5 6 7 8 9
// 2 4 6 8 10 12 14 16 18
// 3 6 9 12 15 18 21 24 27
// 4 8 12 16 20 24 28 32 36
// 5 10 15 20 25 30 35 40 45
// 6 12 18 24 30 36 42 48 54
// 7 14 21 28 35 42 49 56 63
// 8 16 24 32 40 48 56 64 72
// 9 18 27 36 45 54 63 72 81

#include <stdio.h>
int main()
{
    int i, j;
    int num;
    for (i = 1; i <= 10; i++)
    {
        num = i;
        for (j = 1; j <= 10; j++)
        {
            printf("%3d\t", (num * j));
        }
        printf("\n");
    }
    return 0;
}

// Task 5:
// Write a C program to enter any number and print table of the given number using for loop. Format of the
// table should be like: If num =5
// 5 * 1 =5
// 5 * 2 =10
// …………….
// 5 * 10 =50

#include <stdio.h>
int main()
{
    int i;
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, i * num);
    }
    return 0;
}

// Task 6:
// Write a C program that will print the following pattern:
// 1******
// 12*****
// 123****
// 1234***
// 12345**
// 123456*
// 1234567

#include <stdio.h>
int main()
{
    int rows = 7;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int k = i + 1; k <= rows; k++)
        {
        }
        printf("*");
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int number;
    int operations = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    while (number != 1)
    {
        printf("%d ", number);
        if (number % 2 == 0)
        {
            number /= 2;
        }
        else
        {
            number = number * 3 + 1;
        }
        operations++;
    }
    printf("1\n");
    printf("Number of operations: %d\n", operations);
    return 0;
}
// Task 10:
// Assume that the salesmen of a company are paid a commission based on the number of sales made during a
// week. The staff is paid a commission of $8 for sales less than 15, $12 for 15 sales, and $16 if
// Sales exceed 15. Find the commission for each salesman, if the total number of salesmen in the company is
// taken input from the user.

#include <stdio.h>
int main()
{
    int totalSalesmen, sales, commission;
    int i;
    printf("Enter the total number of salesmen: ");
    scanf("%d", &totalSalesmen);
    for (i = 1; i <= totalSalesmen; i++)
    {
        printf("Enter the number of sales for salesman %d: ", i);
        scanf("%d", &sales);
        if (sales < 15)
        {
            commission = 8;
        }
        else if (sales == 15)
        {
            commission = 12;
        }
        else
        {
        }
        commission = 16;
        printf("Commission for salesman %d: $%d\n", i, commission);
    }
    return 0;
}
// Practice problems:
// . A dice is rolled n number of times. Show the possible outcomes of dice. For example, if a dice is rolled
// twice the possible outcomes would be:
// (1,1), (1,2),(1,3), (1,4), (1,5),(1,6)
// (2,1), (2,2),(2,3), (2,4), (2,5),(2,6)
// (3,1), (3,2),(3,3), (3,4), (3,5),(3,6)
// (4,1), (4,2),(4,3), (4,4), (4,5),(4,6)
// (5,1), (5,2),(5,3), (5,4), (5,5),(5,6)
// (6,1), (6,2),(6,3), (6,4), (6,5),(6,6)