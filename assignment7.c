#include <stdio.h>
#include <math.h>
/*
// Question 1
// Write a program to find the Nth term of the Fibonnaci series.
int main()
{
    int number1 = -1, number2 = 1, i, nth_term, term;
    printf("Which term of the fibonaaci series do you like to print : ");
    scanf("%d", &nth_term);
    for (i = 1; i <= nth_term; i++)
    {
        term = number1 + number2;
        number1 = number2;
        number2 = term;
    }
    printf("%dth term of the fibonaaci series = %d", nth_term, term);
    return (0);
}
*/
/*
// Question 2
// Write a program to print first N terms of Fibonacci series
int main()
{
    int number, num1 = -1, num2 = 1, i, temp_term;
    printf("How many term of fibonacci series do you like to print : ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        temp_term = num1 + num2;
        num1 = num2;
        num2 = temp_term;
        printf("%d\t", temp_term);
    }
    return 0;
}
*/
/*
// Question 3
// Write a program to check whether a given number is there in the Fibonacci series or not.
int main()
{
    int number, num1 = -1, num2 = 1, term;
    printf("Enter a number to check Fibonacci series Or Not : ");
    scanf("%d", &number);
    while (1)
    {
        term = num1 + num2;
        num1 = num2;
        num2 = term;
        if (term >= number)
            break;
    }
    if (term == number)
        printf("%d number is in fibonacci series number!",number);
    else
        printf("%d is not in fibonacci series number!",number);
    return (0);
}
*/
/*
// Question 4
// Write a program to calculate HCF of two numbers
int main()
{
    int number1, number2, i;
    printf("Enter two numbers to calculate HCF : ");
    scanf("%d%d", &number1, &number2);
    for (i = number1 < number2 ? number1 : number2; i >= 1; i--)
    {
        if (number1 % i == 0 && number2 % i == 0)
            break;
    }
    printf("HCF = %d", i);
    return (0);
}
*/
/*
// Question 5
// Write a program to check whether two given numbers are co-prime
// numbers or not
int main()
{
    int number1, number2, i, k;
    printf("Enter two numbers : ");
    scanf("%d%d", &number1, &number2);
    for (i = 2; i < (number1 < number2 ? number1 : number2); ++i)
    {
        if (number1 % i == 0 && number2 % i == 0)
            break;
    }
    k = number1 < number2 ? number1 : number2;
    if (i == k)
        printf("(%d , %d) is co-prime number!", number1, number2);
    else
        printf("(%d , %d ) is not co-prime number!", number1, number2);
    return (0);
}
*/
/*
// Question 6
// Write a program to print all Prime numbers under 100
int main()
{
    int i, j;
    for (i = 1; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            printf("%d\t", i);
    }
    return (0);
}
*/
/*
//Question 7
//Write a program to print all Prime numbers between two given numbers
int main()
{
    int number1,number2,i,j,max,min;
    printf("Enter two number : ");
    scanf("%d%d",&number1,&number2);
    max=number1>number2?number1:number2;
    min=number1<number2?number1:number2;
    for(i=min;i<=max;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d  ",i);
    }
    return(0);
}
*/
/*
//Question 8
//Write a program to find next Prime number of a given number
int main()
{
    int number,j;
    printf("Enter a number after which you want to find prime number : ");
    scanf("%d",&number);
    while(1)
    {
        number++;
        for(j=2;j<number;j++)
        {
            if(number%j==0)
                break;
        }
        if(number==j)
            break;
    }
    printf("Next prime = %d",number);
    return(0);
}
*/
/*
// Question 9
// Write a program to check whether a given number is an Armstrong number
// or not
int main()
{
    int number, digit_count = 0, temp_number, sum = 0, multi = 1;
    int i, j, digit;
    printf("Enter a number to check Armstrong : ");
    scanf("%d", &number);
    temp_number = number;
    while (temp_number)
    {
        digit_count++;
        temp_number /= 10;
    }
    temp_number = number;
    for (i = 1; i <= digit_count; i++)
    {
        multi = 1;
        digit = temp_number % 10;
        for (j = 1; j <= digit_count; j++)
        {
            multi *= digit;
        }
        sum = sum + multi;
        temp_number /= 10;
    }
    if (number == sum)
        printf("%d is armstrong number ", number);
    else
        printf("%d is not Armstrong number!", number);
    return (0);
}
*/

// Question 10
// Write a program to print all Armstrong numbers under 1000
int main()
{
    int i, j, k, multi, sum, digit_count, digit, temp_number;
    for (i = 1; i <= 1000; i++)
    {
        sum = 0;
        temp_number = i;
        digit_count = 0;
        while (temp_number)
        {
            digit_count++;
            temp_number /= 10;
        }
        temp_number = i;
        for (j = 1; j <= digit_count; ++j)
        {
            digit = temp_number % 10;
            multi = 1;
            for (k = 1; k <= digit_count; k++)
            {
                multi *= digit;
            }
            sum += multi;
            temp_number /= 10;
        }
        if (sum == i)
            printf("%d  ", i);
    }
    return (0);
}
