#include <stdio.h>
int greatest_number(int arr[], int);
int smallest_number(int arr[], int);
void input(int arr[], int);
void display(int arr[], int);
void bubble_sort(int arr[], int);
void selection_sort(int arr[], int);
void rotate_array(int arr[], int, int, char);
int first_occurrence(int arr[], int);
void display_reverse(int arr[], int);
void print_unique_number(int arr[], int);
void bubble_sort_decending(int arr[], int);
void merge(int s1[], int s2[], int);
int count_duplicate(int arr[], int);
void count_frequency(int arr[], int);
int main()
{
    int arr1[10], arr2[10], i;
    input(arr1, 10);

    print_unique_number(arr1, 10);
    return (0);
}
// Question number 1
int greatest_number(int arr[], int size)
{
    int i, max;
    max = arr[0];
    for (i = 1; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}
// Question number 2
int smallest_number(int arr[], int size)
{
    int i, min;
    min = arr[0];
    for (i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
// Question number 3
void bubble_sort(int arr[], int size)
{
    int round, j, temp;
    for (round = 0; round < size; round++)
    {
        for (j = 0; j < size - 1 - round; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// Question number 3
void bubble_sort_decending(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// Question number 3
void selection_sort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = 1 + i; j < size; j++)
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

void input(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Array[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n\n");
}
void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n\n");
}
// Question number 4
void rotate_array(int arr[], int size, int n, char d)
{
    int i, temp;
    while (n)
    {
        if (d == 'l' || d == 'L')
        {
            temp = arr[0];
            for (i = 0; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            arr[i] = temp;
        }
        else
        {
            temp = arr[size - 1];
            for (i = size - 1; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[i] = temp;
        }
        n--;
    }
}
// Question number 5
int first_occurrence(int arr[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            return (arr[i]);
    }
    return 0;
}
// Question number 6
void display_reverse(int arr[], int size)
{
    int i;
    for (i = size - 1; i > -1; i--)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n\n");
}
// Question number 8
void print_unique_number(int arr[], int size)
{
    int i, j, flag;
    for (i = 0; i < size; i++)
    {
        flag = 1;
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d  ", arr[i]);
    }
}
// Question number 9
void merge(int s1[], int s2[], int size)
{
    int i, j, arr[2 * size];
    for (i = 0; i < 2 * size; i++)
    {
        if (i < size)
            arr[i] = s1[i];
        else
            arr[i] = s2[i - size];
    }
    bubble_sort_decending(arr, 2 * size);
    display(arr, 2 * size);
}
// Question number 7
int count_duplicate(int arr[], int size)
{
    int i, count = 0, j, flag = 0;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                flag = 1;
                break;
            }
        }
    }
    return (count);
}
// 10. Write a function in C to count the frequency of each element of an array.
void count_frequency(int arr[], int size)
{
    int i, count = 0, ncount = 0, j;
    bubble_sort(arr, size);
    i = 0;
    while (i < size)
    {
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        ncount = count - ncount;
        printf("%d:   %d  ", arr[i], ncount);
        ncount = count;
        i = count;
    }
}