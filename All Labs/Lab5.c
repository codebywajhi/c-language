// Task 1: 
// LAB NO: 5 
// A company insures its drivers in the following cases ―If driver is married ―If the driver is unmarried, male & above 30 years of age ―If the driver is unmarried, female & above 25 years of age 
// In all other cases the driver is not insured. If the marital status, gender and age of the driver are entered 
// through the keyboard, write a program to determine whether the driver is to be insured or not. 
#include <stdio.h> 
int main() { 
char maritalStatus, gender; 
int age; 
printf("Enter marital status (M for married, U for unmarried): "); 
scanf(" %c", &maritalStatus); 
printf("Enter gender (M for male, F for female): "); 
scanf(" %c", &gender); 
printf("Enter age: "); 
scanf("%d", &age); 
if (maritalStatus == 'M' || (maritalStatus == 'U' && gender == 'M' && age > 30) || 
(maritalStatus == 'U' && gender == 'F' && age > 25)) { 
printf("Driver is insured.\n"); 
} else { 
printf("Driver is not insured.\n"); 
} 
return 0; 
} 
// Any year is input through the keyboard. Write a program to determine whether the year is a leap year or 
// not. 
#include <stdio.h> 
int main() { 
int year; 
printf("Enter a year: "); 
scanf("%d", &year); 
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) { 
printf("%d is a leap year.\n", year); 
} else { 
printf("%d is not a leap year.\n", year); 
} 
return 0; 
}