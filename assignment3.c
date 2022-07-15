#include <stdio.h>
#include <conio.h>

/*
// Question number 1
// Write a program to check whether a given number is positive or non-positive.
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    if(number>0)
    {
        printf("Positive number!");
    }
    else
    {
        printf("Non-positive number!");
    }
    getch();
    return(0);
}
*/

/*
//Question number 2
// Write a program to check whether a given number is divisible by 5 or not
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    if(number%5)
    {
        printf("Number is not divisible by 5!");
    }
    else
    {
        printf("Number is divisible by 5!");
    }
    getch();
    return(0);
}
*/

/*
// Question number 3
// Write a program to check whether a given number is an even number or an odd number.
int main()
{
    int number;
    printf("Enter a number to check Even or Odd : ");
    scanf("%d",&number);
    if(number%2)
    {
        printf("%d is Odd number",number);
    }
    else
    {
        printf("%d is Even number ",number);
    }
    getch();
    return(0);
}
*/

/*
// Question number 4
//Write a program to check whether a given number is an even number or an odd
//number without using % operator.
int main()
{
    int number;
    printf("Ener a number : ");
    scanf("%d",&number);
    if(number&1)
    {
        printf("Odd number!");
    }
    else
    {
        printf("Even number!");
    }
    return(0);
}
*/

/*
// Question number 5
//Write a program to check whether a given number is a three-digit number or not.
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    if(number/100)
    {
        printf("Three digit number");
    }
    else
    {
        printf("Number is not three digit!");
    }
    return(0);
}
*/

/*
//Question number 6
//Write a program to print greater between two numbers. Print one number of both are
//the same.
int main()
{
    int number1,number2;
    printf("Enter two numbers : ");
    scanf("%d%d",&number1,&number2);
    if(number1>number2)
    {
        printf("Greater number = %d",number1);
    }
    else
    {
        if(number1==number2)
            printf("Both numbers are same\nNumber  = %d",number2);
        else
            printf("Greater number = %d",number2);
    }
    return(0);
}
*/

/*
//Question number 7
// Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots
int main()
{
    int a,b,c,D;
    printf("Enter coefficient of x^2 , x and constant term : ");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-(4*a*c);
    if(D>0)
    {
        printf("Roots are real and differen");
    }
    else if(D==0)
    {
        printf("Roots are real and Same");
    }
    else
    {
        printf("Roots are Imaginary");
    }
    return(0);
}
*/

/*
//Question number 8
//Write a program to check whether a given year is a leap year or not.
int main()
{
    int year;
    printf("Enter to check leap year or Not : ");
    scanf("%d",&year);
    if(year%100)
    {
        if(year%4)
        {
            printf("Year is not lear year");
        }
        else
        {
            printf("Year is leap year");
        }
    }
    else
    {
        if(year%400)
        {
            printf("Year is not leap year");
        }
        else
        {
            printf("Year is leap year");
        }
    }
    return(0);
}
*/

/*
//Question number 9
//Write a program to find the greatest among three given numbers. Print number once
//if the greatest number appears two or three times.
int main()
{
    int number1,number2,number3;
    printf("Enter three number to find greates number : ");
    scanf("%d%d%d",&number1,&number2,&number3);
    if(number1>number2)
    {
        if(number1>number3)
        {
            printf("Greatest number : %d",number1);
        }
        else
        {
            printf("Greatest number : %d",number3);
        }
    }
    else
    {
        if(number2>number3)
        {
            printf("Greatest number : %d",number2);
        }
        else
        {
            printf("Greatest number : %d",number3);
        }
    }
    getch();
    return(0);
}
*/

/*
// Question number 10
//Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.
int main()
{
    float cost_price,selling_price,result;
    float per;
    char ch='%';
    printf("Enter cost price and selling price of product : ");
    scanf("%f%f",&cost_price,&selling_price);

    if(selling_price>cost_price)
    {
        result=selling_price-cost_price;
        per=(result/cost_price)*100;
        printf("Profit percentage = %f %c",per,ch);
    }
    else if(selling_price==cost_price)
    {
        printf("No profit No loss!!");
    }
    else
    {
        result=cost_price-selling_price;
        per=(result/cost_price)*100;
        printf("Loss percentage = %f %c",per,ch);
    }
    return(0);
}
*/

/*
// Question number 11
// Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.
int main()
{
    float math, phy, chem, hindi, sans;
    printf("Enter marks of five subject (m,p,c,h,sans) : ");
    scanf("%f%f%f%f%f", &math, &phy, &chem, &hindi, &sans);
    if (math >= 33 && phy >= 33 && chem >= 33 && hindi >= 33 && sans >= 33)
    {
        printf("Passed!");
    }
    else
    {
        printf("Failed");
    }
    return(0);
}
*/

/*
// Question number 12
// Write a program to check whether a given alphabet is in uppercase or lowercase.
int main()
{
    char ch;
    printf("Enter a alphabet : ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Alphabet in uppercase!");
    else
        printf("Aphabet in lowercase!");
    return (0);
}
*/

/*
// Question number 13
// Write a program to check whether a given number is divisible by 3 and divisible by 2.
int main()
{
    int number;
    printf("Enter a number to check divisibility (3 and 2) : ");
    scanf("%d", &number);
    if (number % 2 == 0 && number % 3 == 0)
    {
        printf("%d is divisible by 2 and 3",number);
    }
    else
    {
        printf("%d is not divisible by 2 and 3",number);
    }
    return(0);
}
*/

/*
// Question number 14
// Write a program to check whether a given number is divisible by 7 or divisible by 3.
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    if (number % 7 == 0 || number % 3 == 0)
    {
        printf("%d is divisible by 7 or 3", number);
    }
    else
    {
        printf("%d is not divisible by 7 or 3", number);
    }
    return (0);
}
*/

/*
// Question number 15
// Write a program to check whether a given number is positive, negative or zero.
int main()
{
    int number;
    printf("Enter a number to check positive , negative or zero : ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Negative!");
    }
    else if (number > 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}
*/

/*
// Question number 16
// Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Alphabet in lowercase");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Alphaber in upercase");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Aphabet is digit");
    }
    else
    {
        printf("Aphabet is special charater!");
    }
    return 0;
}
*/

/*
// Question number 17
//Write a program which takes the length of the sides of a triangle as an input. Display
//whether the triangle is valid or not.
// Question hint........
// if sum of two sides of a triangle is greater than side ,It means is  valid other wise
// triangle is not valid.
int main()
{
    int side1,side2,side3;
    // sides of triangle is positive.
    printf("Enter sides of treangle : ");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1+side2>side3||side1+side3>side2||side2+side3>side1)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid!");
    }
    return(0);
}
*/

// Question number 18
// Write a program which takes the month number as an input and display number of
//days in that month

int main()
{
    short int month_number;
    printf("Enter month number : ");
    scanf("%d",&month_number);
    if(month_number==1)
    {
        printf("January - 31 days");
    }
    else if(month_number==2)
    {
        printf("February - 28/29 days");
    }
    else if(month_number==3)
    {
        printf("March - 31 days!");
    }
    else if(month_number==4)
    {
        printf("April - 30 days!");
    }
    else if(month_number==5)
    {
        printf("May - 31 days!");
    }
    else if(month_number==6)
    {
        printf("June - 30 days!");
    }
    else if(month_number==7)
    {
        printf("July - 31 days!");
    }
    else if(month_number==8)
    {
        printf("August - 31 days!");
    }
    else if(month_number==9)
    {
        printf("September - 30 days!");
    }
    else if(month_number==10)
    {
        printf("October - 31 days!");
    }
    else if(month_number==11)
    {
        printf("November - 30 days");
    }
    else if(month_number==12)
    {
        printf("December - 31 days!");
    }
    else{
        printf("Wrong month number!");
    }

    return 0;
}
