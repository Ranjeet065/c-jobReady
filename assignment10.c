 
// Question number 1
float area(float r)
{
    float ar;
    ar = 3.14 * r * r;
    return (ar);
}
// Question number 2
float simple_interest(float p, int t, float r)
{
    float si;
    si = (p * t * r) / 100;
    return (si);
}
// Question number 3
int EvenOdd(int n)
{
    if (n % 2)
        return (0);
    else
        return (1);
}

// Question number 4
void print_naturalNumber(int n)
{
    int i = 1;
    while (i <= n)
    {
        printf("%d\t", i);
        i += 1;
    }
}
// Question number 5
void Odd_number(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", 2 * i - 1);
    }
}
// Question number 6
int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    return (f);
}
// Question number 7
int combination(int n, int r)
{
    int i, fact1 = 1, fact2 = 1, fact3 = 1;
    for (i = 1; i <= n; i++)
    {
        fact1 *= i;
    }
    for (i = 1; i <= n - r; i++)
    {
        fact2 *= i;
    }
    for (i = 1; i <= r; i++)
    {
        fact3 *= i;
    }
    return (fact1 / (fact2 * fact3));
}
// Question number 8
int permutation(int n, int r)
{
    int i, fact = 1, fact1 = 1, p;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    for (i = 1; i <= n - r; i++)
    {
        fact1 *= i;
    }
    p = fact / fact1;
    return (p);
}
// Question number 9
int check_digit(int n, int d)
{
    int digit, flag = 0;
    while (n)
    {
        digit = n % 10;
        if (digit == d)
        {
            flag = 1;
            break;
        }
        n = n / 10;
    }
    if (flag)
        return (1);
    else
        return (0);
}
// Question number 10
void prime_factor(int n)
{
    int i;
    while (1)
    {
        for (i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                printf("%d\t", i);
                n = n / i;
                break;
            }
        }
        if (n == 1)
            break;
    }
}