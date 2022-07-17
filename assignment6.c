#include <stdio.h>
#include <conio.h>
/*
//Question 1
//Write a program to calculate sum of first N natural numbers
int main()
{
    int number,i,sum=0;
    printf("Enter a natural number : ");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        sum+=i;
    }
    printf("\nSum of %d natural number = %d",number,sum);
    return(0);
}
*/
/*
//Question 2
//Write a program to calculate sum of first N even natural numbers
int main()
{
    int i=1,number,sum=0;
    printf("How many even natural numbers do want to sum : ");
    scanf("%d",&number);
    while(i<=number)
    {
        sum+=2*i;
        i++;
    }
    printf("Sum of %d even natural numbers = %d",number,sum);
    return(0);
}
*/
/*
// Question 3
// Write a program to calculate sum of first N odd natural numbers
int main()
{
    int i, number, sum = 0;
    printf("Enter how many Odd natural number , do you want to sum : ");
    scanf("%d", &number);
    for (i = 1; i <= number; ++i)
    {
        sum += 2 * i - 1;
    }
    printf("\nSum of %d odd natural numbers = %d", number, sum);
    return (0);
}
*/
/*
// Question 4
// Write a program to calculate sum of squares of first N natural numbers
int main()
{
    int i = 1, number, sum = 0;
    printf("Enter a natural number : ");
    scanf("%d", &number);
    while (i <= number)
    {
        sum += i * i;
        ++i;
    }
    printf("Sum of squares of %d natural numbers = %d", number, sum);
    return (0);
}
*/
/*
// Question 5
// Write a program to calculate sum of cubes of first N natural numbers
int main()
{
    int i, number, sum = 0;
    printf("How many natural number that you want to sum of cubes : ");
    scanf("%d", &number);
    for (i = 1; i <= number; ++i)
    {
        sum += i * i * i;
    }
    printf("Sum of cubes of %d natural numbers = %d", number, sum);
    return (0);
}
*/
/*
// Question 6
// Write a program to calculate factorial of a number
int main()
{
    int number, fact = 1;
    int i = 1;
    printf("Enter a number that you want to calculate factorial : ");
    scanf("%d", &number);
    while (i <= number)
    {
        fact *= i;
        ++i;
    }
    printf("!%d  =  %d", number, fact);
    return (0);
}
*/
/*
// Question 7
// Write a program to count digits in a given number
int main()
{
    int number, temp_number, count_digit = 0;
    printf("Enter a number in which you like to count digits : ");
    scanf("%d", &number);
    temp_number = number;
    while (temp_number)
    {
        count_digit++;
        temp_number /= 10;
    }
    printf("\nTotal number digits in %d = %d", number, count_digit);
    return (0);
}
*/
/*
// Question 8
// Write a program to check whether a given number is a Prime number or not.
int main()
{
    int number, i;
    printf("Enter a number that you like to check prime or not : ");
    scanf("%d", &number);
    for (i = 2; i < number; ++i)
    {
        if (number % i == 0)
        {
            break;
        }
    }
    if (i == number)
    {
        printf("%d is prime number!", number);
    }
    else
    {
        printf("%d is not prime number!", number);
    }
    return (0);
}
*/
/*
// Question 9
// Write a program to calculate LCM of two numbers
int main()
{
    int number1, number2, i;
    printf("Enter two numbers that you would like to calculate LCM : ");
    scanf("%d%d", &number1, &number2);
    for (i = number1 < number2 ? number1 : number2; i <= number1 * number2; i++)
    {
        if (i % number1 == 0 && i % number2 == 0)
            break;
    }
    printf("LCM of %d and %d :  %d", number1, number2, i);
    return (0);
}
*/
// Question 10
// Write a program to reverse a given number
int main()
{
    int number, temp_number, temp = 0, d;
    printf("Enter a number that you want to reverse : ");
    scanf("%d", &number);
    temp_number = number;
    while (temp_number)
    {
        d = temp_number % 10;
        temp_number /= 10;
        temp = temp * 10 + d;
    }
    printf("Reverse number of %d  = %d", number, temp);
    return (0);
}
