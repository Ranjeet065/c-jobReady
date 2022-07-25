#include <stdio.h>
#include <conio.h>
void print_natural_number(int);
void print_natural_numberReverse(int);
void print_Odd(int);
void print_OddReverse(int);
void print_Even(int);
void print_EvenReverse(int);
void print_Squares(int);
void print_Binary(int);
void print_Octal(int);
void number_Reverse(int);
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    number_Reverse(number);
    return 0;
}
// Question number 1
void print_natural_number(int n)
{
    if (n > 0)
    {
        print_natural_number(n - 1);
        printf("%d  ", n);
    }
}
// Question number 2
void print_natural_numberReverse(int n)
{
    if (n > 0)
    {
        printf("%d  ", n);
        print_natural_numberReverse(n - 1);
    }
}
// Question number 3
void print_Odd(int n)
{
    if (n > 0)
    {
        print_Odd(n - 1);
        printf("%d ", n * 2 - 1);
    }
}
// Question number 4
void print_OddReverse(int n)
{
    if (n > 0)
    {
        printf("%d  ", 2 * n - 1);
        print_OddReverse(n - 1);
    }
}
// Question number 5
void print_Even(int n)
{
    if (n > 0)
    {
        print_Even(n - 1);
        printf("%d  ", 2 * n);
    }
}
// Question number 6
void print_EvenReverse(int n)
{
    if (n > 0)
    {
        printf("%d  ", 2 * n);
        print_EvenReverse(n - 1);
    }
}
// Question number 7
void print_Squares(int n)
{
    if (n > 0)
    {
        print_Squares(n - 1);
        printf("%d  ", n * n);
    }
}
// Question number 8
void print_Binary(int n)
{
    short int r;
    if (n >= 1)
    {
        r = n % 2;
        print_Binary(n / 2);
        printf("%d", r);
    }
}
// Question number 9
void print_Octal(int n)
{
    short int r;
    if (n > 0)
    {
        r = n % 8;
        print_Octal(n / 8);
        printf("%d", r);
    }
}

// Question number 10
void number_Reverse(int n)
{
    short int d;
    if (n > 0)
    {
        printf("%d", n % 10);
        number_Reverse(n / 10);
    }
}