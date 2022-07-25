#include <stdio.h>
int sum_natural(int);
int sum_Odd(int);
int sum_even(int);
int sum_squares(int);
int sum_digit(int);
int factorial(int);
int HCF(int, int);
void print_fib(int);
int count_digit(int);
int power(int, int);

int main()
{
    int number;
    printf("Enter a number that you like to calculate factorial : ");
    scanf("%d", &number);
    printf("Factorial is %d", factorial(number));
    return (0);
}
// Question number 1
int sum_natural(int n)
{
    if (n == 1)
        return (1);
    return (n + sum_natural(n - 1));
}

// Question number 2
int sum_Odd(int n)
{
    if (n == 1)
        return (1);
    return ((2 * n - 1) + sum_Odd(n - 1));
}
// Question number 3
int sum_even(int n)
{
    if (n == 1)
        return 2;
    return (2 * n + sum_even(n - 1));
}
// Question number 4
int sum_squares(int n)
{
    if (n == 1)
        return (1);
    return (n * n + sum_squares(n - 1));
}
// Question number 5
int sum_digit(int n)
{
    if (n == 0)
        return (0);
    return (n % 10 + sum_digit(n / 10));
}
// Question number 6
int factorial(int n)
{
    if (n == 1 || n == 0)
        return (1);
    return (n * factorial(n - 1));
}
// question number 7
int HCF(int a, int b)
{
    if (a > b)
    {
        if (a % b == 0)
            return (b);
        return (HCF(a % b, b));
    }
    else
    {
        if (b % a == 0)
            return (a);
        return (HCF(a, b % a));
    }
}
// Question number 8
void print_fib(int n)
{
    static int prev = 0, next = 1, temp;
    if (n > 0)
    {
        print_fib(n - 1);
        printf("%d\t", prev);
        temp = prev;
        prev = next;
        next = temp + next;
    }
}
// uestion number 9
int count_digit(int n)
{
    int count = 0;
    if (n == 0)
    {
        return (0);
    }
    count += 1 + count_digit(n / 10);

    return (count);
}
// Question number 10
int power(int n, int p)
{
    if (p == 1)
        return (n);
    else if (p == 0)
        return (1);
    return (n * power(n, p - 1));
}