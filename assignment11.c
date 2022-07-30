#include <stdio.h>
#include <conio.h>
int LCM(int, int);
int HCF(int, int);
int Isprime(int);
int Nextprime(int);
void print_prime(int, int);
void print_fib(int);
int fact(int);
void print_pascal(int);
int square(int);
int sum_series(int);
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    printf("Sum series = %d ",sum_series(number));
    return (0);
}
// Question number 1
int LCM(int a, int b)
{
    int i;
    for (i = a < b ? a : b; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
            break;
    }
    return (i);
}

// Question number 2
int HCF(int a, int b)
{
    int i;
    int min = a < b ? a : b;
    for (i = min; i > 1; i--)
    {
        if (a % i == 0 && b % i == 0)
            return (i);
    }
}
// Question number 3
int Isprime(int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i > n / 2)
        return (1);
    else
        return (0);
}
// Question number 4
int Nextprime(int n)
{
    int i;
    while (1)
    {
        n++;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                break;
        }
        if (i > n / 2)
            return (n);
    }
}
// Question number 6
void print_prime(int a, int b)
{
    int i, j, min, max, flag;
    min = a < b ? a : b;
    max = a > b ? a : b;
    for (i = min; i <= max; i++)
    {
        flag = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j > i / 2 && i > 1)
            printf("%d\t", i);
    }
}

// Question number 7
void print_fib(int n)
{
    int prev = 0, next = 1, temp, i, j;
    while (n)
    {
        printf("%d\t", prev);
        temp = prev;
        prev = next;
        next = next + temp;
        n--;
    }
}
int fact(int n)
{
    int i, fac = 1;
    for (i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return (fac);
}
// Question number 8
void print_pascal(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", fact(i) / (fact(i - j) * fact(j)));
        }
        printf("\n");
    }
}
// Question number 9
int square(int n)
{
    return (n * n);
}
// Question number 10
int sum_series(int number)
{
    int i, sum = 0;
    for (i = 1; i <= number; i++)
    {
        sum += fact(i) / i;
    }
    return (sum);
}

