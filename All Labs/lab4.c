// Task 01: Aslam’s basic salary is input through the keyboard. His medical allowance is 40% of basic salary,
// and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
#include <stdio.h>
int main()
{
    int BS, medicalAllowance, houseRentAllowance, grossSalary;
    printf("Enter Aslam's basic salary: ");
    scanf("%d", &BS);
    medicalAllowance = 0.4 * BS;
    houseRentAllowance = 0.2 * BS;
    grossSalary = BS + medicalAllowance + houseRentAllowance;
    printf("Aslam's gross salary is: %d\n", grossSalary);
    return 0;
}
// Task 02: If a five-digit number is input through the keyboard, write a program to print in reverse order.
// (Hint: Use the modulus operator ‘%’)
#include <stdio.h>
int main()
{
    int number, digit;
    printf("Enter a five-digit number: ");
    scanf("%d", &number);
    printf("Number in reverse order: ");
    digit = number % 10;
    printf("%d", digit);
    number /= 10;
    digit = number % 10;
    printf("%d", digit);
    number /= 10;
    digit = number % 10;
    printf("%d", digit);
    number /= 10;
    digit = number % 10;
    printf("%d", digit);
    number /= 10;
    digit = number % 10;
    printf("%d", digit);
    printf("\n");
    return 0;
}
// Task 03: In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage of
// literate men is 35 of the total population, write a program to find the total number of illiterate men and
// women if the population of the town is 80,000.
#include <stdio.h>
int main()
{
    int totalPopulation = 80000;
    int totalLiteracy = (48 * totalPopulation) / 100;
    int literateMen = (35 * totalPopulation) / 100;
    int illiterateMen = literateMen - (totalLiteracy * 52) / 100;
    int illiterateWomen = totalPopulation - (totalLiteracy + illiterateMen);
    printf("Total number of illiterate men: %d\n", illiterateMen);
    printf("Total number of illiterate women: %d\n", illiterateWomen);
    return 0;
}