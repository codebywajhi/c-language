// 1. Compute arithmetic operation on floating values f and g are 18.5 or 2.0
#include <stdio.h>
int main()
{
    float f = 18.5;
    float g = 2.0;
    float h;
    h = f + g;
    printf("value of h is %f\n", h);
    h = f - g;
    printf("value of h is %f\n", h);
    h = f * g;
    printf("value of h is %f\n", h);
    h = f / g;
    printf("value of h is %f\n", h);
    return 0;
}
// 2.
// Assignment operator
#include <stdio.h>
int main()
{
    int total = 0;
    float count = 10;
    printf("total= %d\n", total);
    total += count;
    printf("total= %d\n", total);
    total += count;
    return 0;
}
// Increment /decrement operator
#include <stdio.h>
int main()
{
    int n = 0;
    printf("number= %d\n", n);
    printf("number= %d\n", n++);
    printf("number= %d\n", n);
    return 0;
}
// Relational operator:
#include <stdio.h>
int main()
{
    int speed;
    speed == 75;
    printf("is speed equal to 55? %d\n", speed == 55);
    speed = 55;
    printf("is speed equal to 55? %d\n", speed == 55);
    return 0;
}
// TASK NO: 1 Create a program that will take subject marks as input and calculate total marks and
// percentage.
#include <stdio.h>
int main()
{
    float eng, urdu, math, total, per;
    printf("enter the marks of 3 subjects\n");
    scanf("%f %f %f", &eng, &urdu, &math);
    total = eng + urdu + math;
    per = (total / 300.0) * 100;
    printf("total marks %f\n", total);
    printf("percentage %f\n", per);
    return 0;
}
// TASK : If a five-digit number is input through the keyboard, write a program to calculate the sum of its
// digits. (Hint: Use the modulus operator ‘%’)
#include <stdio.h>
int main()
{
    int num = 54768;
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    printf("digit sum: %d\n", sum);
    return 0;
}
// TASK: In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage
// of literate men is 35 of the total population, write a program to find the total number of illiterate men
// and women if the population of the town is 80,000.
#include <stdio.h>
int main()
{
    float tp = 80000, pm = 52, ptL = 48, pti = 52, plm = 35, pim, piw;
    pim = pm - plm;
    piw = pti - pim;
    printf("Total illiterate men:%.2f\n", pim * 80000 / 100);
    printf("Total illiterate women:%.2f\n", piw * 80000 / 100);
    return 0;
}
// Task : A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is
// input through the keyboard in hundreds, find the total number of currency notes of each denomination
// the cashier will have to give to the withdrawer.
#include <stdio.h>
int main()
{
    int amt, fifty, hundred, ten, a, b;
    printf("enter amount to be withdraw\n");
    scanf("%d", &amt);
    hundred = amt / 100;
    a = amt % 100;
    fifty = a / 50;
    b = a % 50;
    ten = b / 10;
    printf("notes of hundred:%d\n", hundred);
    printf("notes of fifty:%d\n", fifty);
    printf("notes of ten:%d\n", ten);
    return 0;
}