// Write a function to calculate the factorial value of any integer entered through the keyboard.
#include <stdio.h>
int fact(int num);
int main()
{
    int n, fac;
    printf("Enter an integer: ");
    scanf("%d", &n);
    fac = fact(n);
    printf("The factorial of %d is %d", n, fac);
}
int fact(int num)
{
    int res;
    res = num;
    while (num > 1)
    {
        res = res * (num - 1);
        num = num - 1;
    }
    return res;
}
//  Write a function power (a, b) to calculate the value of ‘a’ raised to the power of ‘b’.
#include <stdio.h>
int power(int a, int b);
int main()
{
    int a, b, res;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    res = power(a, b);
    printf("Result: %d", res);
}
// {}
// int power(int a, int b) int x;
// x = pow(a, b);
// return x;
// Structure pdf questions:
// • structure to specify student details such as name, roll number, and department: write a
// function to print name of all student join in particular year
// write a function to print data whose roll no of student received by function #include

// <stdio.h> struct student
// {
//     int RN;
//     char Name[50];
//     char dep[50];
//     char
//         subject[50];
// };

// int main()
// {
//     struct student students[50];
//     students[0] = (struct student){1, "wajhi", "BSAI", "pf"};
//     students[1] =
//         (struct student){2, "ali", "BSCS", "English"};
//     students[2] = (struct
//                    student){3, "bali", "BSCY", "PY-torch"};
//     students[3] = (struct
//                    student){4, "kashif", "IEEE", "Astronomy"};
//     students[4] = (struct
//                    student){5, "haneef", "BEEE", "Electronics"};
//     students[5] = (struct
//                    student){6, "Rafay", "BEME", "Metallurgy"};
//     int rollnum;
//     int i;
//     printf("Enter your Roll Number : ");
//     scanf("%d", &rollnum);
//     for (int i = 0; i < 7; i++)
//     {
// In the printf statements, the format specifier %c is used to print individual characters.
// However, it seems that Name, dep, and subject are intended to be strings (character arrays). To print strings,
// you should use the %s format specifier.
//         if (rollnum == students[i].RN)
//         {
//             printf("RN :%d\nName :%s\ndep :%s\nsubject :%s\n", students[i].RN, students[i].Name, students[i].dep, students[i].subject);
//         }
//     }
// }
// return 0;
// Question 2: account deposit
#include <stdio.h>
#include <string.h>
struct customers
{
    int Accountno;
    char Name[8];
    int Balance;
};
int main()
{
    struct customers Accholder[8];
    Accholder[0].Accountno = 1;
    strcpy(Accholder[0].Name,
           "Wajhi");
    Accholder[0].Balance =
        80;
    Accholder[1].Accountno = 2;
    strcpy(Accholder[1].Name, "Ali");
    Accholder[1].Balance = 78;
    Accholder[2].Accountno = 3;
    strcpy(Accholder[2].Name, "zeeshan");
    Accholder[2].Balance = 120;
    Accholder[3].Accountno = 4;
    strcpy(Accholder[3].Name, "Ali");
    Accholder[3].Balance = 108;
    Accholder[4].Accountno = 5;
    strcpy(Accholder[4].Name, "wajhiAli");
    Accholder[4].Balance = 28;
    Accholder[5].Accountno = 6;
    strcpy(Accholder[5].Name, "kashanAli");
    Accholder[5].Balance = 68;
    Accholder[6].Accountno = 7;
    strcpy(Accholder[6].Name, "sahafanAli");
    Accholder[6].Balance = 58;
    Accholder[7].Accountno = 8;
    strcpy(Accholder[7].Name, "rafayAli");
    Accholder[7].Balance = 98;
    for (int i = 0; i < 8; i++)
    {
        if (Accholder[i].Balance < 100)
        {
            printf("Acc number: %d\nName: %s\nBalance: %d\n",
                   Accholder[i].Accountno, Accholder[i].Name, Accholder[i].Balance);
        }
    }
    int num;
    printf("Enter 1 for Deposit, Enter 0 for Withdrawal: ");
    scanf("%d", &num);
    int useraccnumber;
    if (num == 0)
    {
        printf("Enter Acc-number: ");
        scanf("%d", &useraccnumber);
        for (int i = 0; i < 8; i++)
        {
            if (Accholder[i].Accountno == useraccnumber)
            {
                if (Accholder[i].Balance < 100)
                {
                    printf("User has insufficient balance.\n");
                }
                else if (Accholder[i].Balance >= 100)
                {
                    printf("User has sufficient balance.\n");
                }
                else
                {
                    printf("Invalid!\n");
                }
                break;
            }
        }
    }
    else if (num == 1)
    {
        printf("Enter your Acc no: ");
        scanf("%d", &useraccnumber);
        for (int i = 0; i < 8; i++)
        {
            if (Accholder[i].Accountno == useraccnumber)
            {
                printf("Your Account Deposit is: %d\n",
                       Accholder[i].Balance);
                break;
            }
        }
    }
    return 0;
}

// Pointers question pdf:
// write a function that receive 5 integer and return sum,average,and standard deviation of these
// function.call this function in main and print in main c.

// #include <stdio.h>
// #include <math.h>
// void calculateStats(int num1, int num2, int num3, int num4, int num5, int *sum, double *average, double *stdDev)
// {
// *sum = num1 + num2 + num3 + num4 + num5;
// *average = (double)(*sum) / 5;
// *stdDev = sqrt((pow(num1 - *average, 2) + pow(num2 - *average, 2) + pow(num3 - *average, 2) +
//                 pow(num4 - *average, 2) + pow(num5 - *average, 2)) /
//                5);
// }
// int main()
// {
// }
// int num1, num2, num3, num4, num5;
// int
//     sum;
// double average, stdDev;
// printf("Enter five integers: ");
// scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
// calculateStats(num1, num2, num3, num4, num5, &sum, &average, &stdDev);
// printf("Sum: %d\n", sum);
// printf("Average: %.2lf\n", average);
// printf("Standard Deviation: %.2lf\n", stdDev);
// return 0;

// • write a function that receive by student in 3 subjects and return average and
//     percentage of these marks.call this function from main and print result in main

// #include <stdio.h>
//     void
//     calculateStats(float subject1, float subject2, float subject3, float *average, float *percentage){} *average = (subject1 + subject2 + subject3) / 3;
// *percentage = (*average / 100) * 100;
// int main()
// {
// float subject1, subject2, subject3;
// float average, percentage;
// printf("Enter marks for subject 1: ");
// scanf("%f", &subject1);
// printf("Enter marks for subject 2: ");
// scanf("%f", &subject2);
// printf("Enter marks for subject 3: ");
// scanf("%f", &subject3);
// calculateStats(subject1, subject2, subject3, &average, &percentage);
// printf("Average marks: %.2f\n", average);
// printf("Percentage: %.2f%%\n", percentage);
// return 0;

// Given three variable x y z write a function to shift their values to right.call function with variables a
//     b c with circulately shift'

// #include <stdio.h>
// void circularShift(int *x, int *y, int *z)
// {
// }
// int temp = *z;
// *z = *y;
// *y = *x;
// *x = temp;
// int main()
// {
// }
// int a, b, c;
// printf("Enter the values of a, b, and c: ");
// scanf("%d %d %d", &a, &b, &c);
// printf("Before circular shift: a = %d, b = %d, c = %d\n", a, b, c);
// circularShift(&a, &b, &c);
// printf("After circular shift: a = %d, b = %d, c = %d\n", a, b, c);
// return 0;
