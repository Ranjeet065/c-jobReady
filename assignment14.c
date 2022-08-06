#include <stdio.h>
void input(int arr[], int);
void display(int arr[], int);
void bubble_sort(int arr[], int);
/*
// Question number 1
int main()
{
    int arr[10];
    int i, sum = 0;
    printf("Enter arrays elements : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("\nSum of elements = %d", sum);
    return (0);
}
*/
/*
// Question number 2
int main()
{
    int arr[10], i, sum = 0;
    float avg;
    printf("Enter arrays elements : ");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / 10.0;
    printf("Average of ten number = %f", avg);
    return (0);
}
*/
/*
// Question number 3
int main()
{
    int arr[10], i, se = 0, so = 0;
    printf("Enter arrays elements : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2)
            so += arr[i];
        else
            se += arr[i];
    }
    printf("\nSum of Even numbers in array = %d", se);
    printf("\nSum of Odd number in array : %d", so);
    return (0);
}
*/
/*
// Question number 4
int main()
{
    int s[10], i, max;
    for (i = 0; i < 10; i++)
    {
        printf("arry[%d] : ", i);
        scanf("%d", &s[i]);
    }
    max = s[0];
    for (i = 1; i < 10; i++)
    {

        if (s[i] > max)
            max = s[i];
    }
    printf("\nGreatest number  : %d", max);
    return (0);
}
*/
/*
// Question number 5
int main()
{
    int arr[10], i, min;
    for (i = 0; i < 10; i++)
    {
        printf("array[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (i = 1; i < 10; i++)
    {

        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("\n\nThe smallest number = %d", min);
    return (0);
}
*/
/*
//Question number 6
int main()
{
    int i,j,arr[10],temp;
    printf("Enter elements of the arrays : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n\nSorted array!\n\n");
    for(i=0;i<10;i++)
    {
        printf("%d  ",arr[i]);
    }
    return(0);
}
*/

/*
// Question number 7
int main()
{
    int arr[10];
    input(arr, 10);
    bubble_sort(arr, 10);
    printf("\n\nSecond largest number = %d",  arr[8]);
    printf("\n\nLargest number = %d", arr[9]);
    return (0);
}
*/
/*
// Question number 8
int main()
{
    int arr[10];
    printf("Enter arry elements : ");
    input(arr, 10);
    bubble_sort(arr, 10);

    printf("\nSecond smallest number = %d", arr[1]);
    return (0);
}
*/
/*
// Question number 9
int main()
{
    int arr[10], i;
    printf("Enter array elements : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 9; i != -1; i--)
    {
        printf("%d  ", arr[i]);
    }
    return (0);
}
*/
/*
// Question number 10
int main()
{
    int arr1[10], arr2[10], i;
    printf("Enter array elements : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < 10; i++)
    {
        arr2[i] = arr1[i];
        printf("%d\t", arr2[i]);
    }
    return (0);
}
*/
void input(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

void bubble_sort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

/*1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.
2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.
3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.
4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.
5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.
6. Write a program to sort elements of an array of size 10. Take array values from the
user.
7. Write a program to find second largest in an array.Take array values from the user.
8. Write a program to find the second smallest number in an array.Take array values
from the user.
9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.
10. Write a program in C to copy the elements of one array into another array.Take array
values from the user.
*/