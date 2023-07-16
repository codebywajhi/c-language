// Task 1: create a program using scanf and prinf with help of format specifier marks of subjects.
#include <stdio.h>
int main()
{
    int sub1;
    int sub2;
    printf("marks of subject 1\n");
    scanf("%d", &sub1);
    printf("marks of subject 2\n");
    scanf("%d", &sub2);
    printf("grade of subject 1\n");
    scanf("%d", &sub1);
    printf("grade of subject 2\n");
    scanf("%d", &sub2);

    // TASK : 02 create a  program  using scanf and printf print following
    // Price of one page:4.75
    // Price of second page:71.00
    // Discount:60.0#include <stdio.h>

    float onepage;
    float fiftenpage;
    float discount;
    printf("price of one page:\n");
    scanf("%f", &onepage);
    printf("price of 15 pages:\n");
    scanf("%f", &fiftenpage);
    printf("price after discount:\n");
    scanf("%f", &discount);

    // TASK NO: 3 Write a program to print table of 9

    int i;
    int num;
    printf("enter a number:\n");
    scanf("%d", &num);
    printf("table of %d\n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d= %d\n", num, i, i * num);
    }

    // TASK NO: 4 attempt example 7 and note output

    int event = 7;
    char heat = 'c';
    float time = 27.25;
    printf("The wining time in heat %c\n", heat);
    printf("of event %d was with out field width is %f\n", event, time);
    printf("of event %d was with out field width is %.2f\n", event, time);

    // TASK NO 5 create a program swap two numbers

    int a = 10;
    int b = 20;
    printf("Before swapping a=%d, b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping a=%d, b=%d\n", a, b);
    return 0;
}
// TASK NO 6 program to calculate area of circle
#include<stdio.h>
int main(){

int radius = 10;
float PI = 3.14;
float area ;
printf("Area of circle is %.2f:\n", PI *radius *radius);

// TASK NO: 7 create a program take take decimal number from user and separate decimal and fractional
// part.

float num;
printf("enter number:");
scanf("%f", &num);
int num_integer = (int)num;
float num_decimal = num - num_integer ;
printf("integer part:%decimal part:%f\n”,num_integer,num_decimal); 

return 0;

}


