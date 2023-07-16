// Task 1:
// LAB NO: 09
// Write a program that will insert 10 integer elements in an array and print them in new lines.
// Task 2:
// Write a program that will ask user to input index number from where to delete a number from array.
#include <stdio.h>
int main()
{
    int array[100];
    int size, index, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
    }
    scanf("%d", &array[i]);
    printf("Enter the index of the element to delete (0 to %d): ", size - 1);
    scanf("%d", &index);
    if (index < 0 || index >= size)
    {
    }
    printf("Invalid index!\n");
    // }else
    {
        for (i = index; i < size - 1; i++)
        {
            array[i] = array[i + 1];
        }
        size--;
        printf("Array after deleting element at index %d:\n", index);
        for (i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
    return 0;
}

// Task 3:
// Write a program to find out the largest and the smallest number in an array.

#include <stdio.h>
int main()
{
    int arr[] = {23, 4, 58, 34, 78};
    int i;
    int largest = arr[0];
    int smallest = arr[1];
    for (i = 1; i <= 5; i++)
    {
        if (largest < arr[i])
        {
        }
        largest = arr[i];
        if (smallest > arr[i])
        {
        }
        smallest = arr[i];
        printf("largest number is %d\n", largest);
        printf("smallest number is %d\n", smallest);
    }
    return 0;
}

// TASK NO: 04   Take 10 numbers input from user in an array, calculate the sum and average of those 10
// numbers.

#include <stdio.h>
int main()
{
    int numbers[10];
    int i, sum = 0;
    float average;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum += numbers[i];
    }
    average = (float)sum / 10;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}

// Task 5:
// Write a program to create two character arrays of same length and copy the content of one array into
// another in reverse order.

#include <stdio.h>
int main()
{
    int ar1[5] = {12, 13, 14, 15, 16}, ar2[5], i;
    for (i = 4; i >= 0; i--)
        // ar2[i] = ar1[4 - i] for (i = 0; i < 5; i++)
        printf("%d ", ar2[i]);

    return 0;
}