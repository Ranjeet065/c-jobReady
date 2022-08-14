#include <stdio.h>
#include <conio.h>
#include <string.h>
void swap(int *, int *);
void swap_strings(char *, char *);
void bubble_sort(int *, int);
void insertion_sort(int *, int);
void display(int *, int);
int max_number(int *, int);
int max_number_in_two(int *, int *);
int string_length(char *);
int count_number_vowels(char *);
int sum_elements(int *, int);
void print_in_reverse(int *p, int);
void print_string_in_reverse(char *str);
int main()
{
    char str[50];
    printf("Enter a string : ");
    fgets(str, 50, stdin);
    print_string_in_reverse(str);
    return 0;
}

// 1. Write a function to swap values of two in variables of calling function. (TSRS)

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

void swap_strings(char *str1, char *str2)
{
    char temp[40];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

void bubble_sort(int *p, int size)
{
    int round, i, temp;
    for (round = 1; round <= size - 1; round++)
    {
        for (i = 0; i < size - round; i++)
        {
            if (*(p + i) > *(p + i + 1))
            {
                temp = *(p + i);
                *(p + i) = *(p + i + 1);
                *(p + i + 1) = temp;
            }
        }
    }
}

void insertion_sort(int *p, int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (*(p + i) > *(p + j))
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

void display(int *p, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d  ", *(p + i));
    }
}
// 4. Write a program in C to demonstrate how to handle the pointers in the program

int max_number(int *ptr, int size)
{
    int i, max;
    max = ptr[0];
    for (i = 1; i < size; i++)
    {
        if (max < ptr[i])
        {
            max = ptr[i];
        }
    }
    return max;
}

// 5. Write a program to find the maximum number between two numbers using a pointer

int max_number_in_two(int *a, int *b)
{
    if (*a > *b)
        return *a;
    else
        return *b;
}

int string_length(char *ptr)
{
    int i;
    for (i = 0; ptr[i]; i++)
        ;
    return i;
}

// 7. Write a program to count the number of vowels and consonants in a string using a
// pointer

int count_number_vowels(char *ptr)
{
    char s[] = "AEIOUaeiou";
    int i, j, count = 0;
    for (i = 0; ptr[i]; i++)
    {
        for (j = 0; s[j]; j++)
        {
            if (ptr[i] == s[j])
            {
                count++;
            }
        }
    }
    return count;
}

// 8. Write a program to compute the sum of all elements in an array using pointers.

int sum_elements(int *p, int size)
{
    int sum = 0, i;
    for (i = 0; i < size; i++)
    {
        sum += p[i];
    }
    return sum;
}
// . Write a program to print the elements of an array in reverse order.

void print_in_reverse(int *p, int size)
{
    int i;
    for (i = size - 1; i > -1; i--)
    {
        printf("%d  ", p[i]);
    }
}

// 10. Write a program to print a string in reverse using a pointer

void print_string_in_reverse(char *str)
{
    int i;
    for (i = strlen(str); i > -1; i--)
        printf("%c", str[i]);
}