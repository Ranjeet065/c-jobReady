#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<math.h>
//Question number 9
int main()
{
    int unit;
    float charge;
    printf("Enter electriciy unit : ");
    scanf("%d",&unit);
    switch(unit)
    {
        case 0 ... 50 :
        charge=charge*0.50;
        charge=charge+charge*0.20;
        printf("Bill amount = %f",charge);
        break;
        case 51 ... 150 :
        charge=(unit-50)*0.75+50*0.50;
        charge=charge+charge*0.20;
        printf("Bill amount : %f",charge);
        break;
        case 151 ... 250 :
        charge=(unit-150)*1.20+100*0.75+50*0.50;
        charge=charge+charge*0.20;
        printf("Bill amount : %f",charge);
        break;
        case 251 ... 10000 :
        charge=(unit-250)*1.50+100*1.20+100*0.75+50*0.50;
        charge=charge+charge*0.20;
        printf("Bill amount : %f",charge);
        break;
        default:
        printf("Unit is to high check it properly !");
    }
    return(0);
}

/*
//Question number 8
int main()
{
    int number;
    char ch;
    do
    {
        printf("\nEnter an Even number : ");
        scanf("%d",&number);
        switch(number%2)
        {
            case 0:
            printf("\nNearest Odd number = %d",number+1);
            printf("\nDo you want to Exit(y) or (n) : ");
            fflush(stdin);
            scanf("%c",&ch);
            break;
            case 1:
            printf("\nYou entered odd number!");
            printf("\nDo you want to Exit (y) otherwise (n) : ");
            fflush(stdin);
            scanf("%c",&ch);
            break;
        }
    }while(ch!='y');
}
*/

/*
// Question number 7
int main()
{
    int number, choice;
    while (1)
    {
        system("cls");
        printf("\n\n1.Positive number to Negative : ");
        printf("\n\n2.Negative number to Positive : ");
        printf("\n3.Exit : ");
        printf("\n\n\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a Positive number : ");
            scanf("%d", &number);
            if (number > 0)
                printf("Negative number : %d", -number);
            break;
        case 2:
            printf("Enter a negative number : ");
            scanf("%d", &number);
            if (number < 0)
                printf("Positive number = %d", -number);
            break;
            case 3:
            exit(0);
        default:
            printf("Invalid choice!");
        }
        printf("\nEnter any key to continue : ");
        getch();
    }
    return 0;
}
*/

/*
// Question number 6
int main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d", &year);
    switch (year % 100)
    {
    case 0:
        if (year % 400)
        {
            printf("Not leap year ");
        }
        else
        {
            printf("Leap year ");
        }
        break;
    case 1 ... 99:
        if (year % 4)
        {
            printf("Not leap year ");
        }
        else
        {
            printf("leap year ");
        }
        break;
    default:
        printf("invalid choice :");
        break;
    }
    return (0);
}
*/
/*
// Question number 5
int main()
{
    int var;
    printf("Enter variable value(1 to 3) : ");
    scanf("%d", &var);
    switch (var)
    {
    case 1:
        printf("good ");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("invalid");
    }
    return 0;
}
*/

/*
//Question number 4
int main()
{
    int choice,a,b,c;
    while(1)
    {
        system("cls");
        printf("\n\n1.Isosceles triangle or not : ");
        printf("\n\n2.Right angled triangle or Not : ");
        printf("\n\n3.Equilateral triangle or Not : ");
        printf("\n\n4.Exit : ");
        printf("\n\n\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter sides of triangle : ");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b||b==c||a==c)
            {
                printf("Isosceles triangle ");
            }
            else
            {
                printf("Not isosceles triangle ");
            }
            break;
            case 2:
            printf("Enter sides of triangle : ");
            scanf("%d%d%d",&a,&b,&c);
            if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
            {
                printf("Triangle is right angled ");
            }
            else
            {
                printf("Triangle is not right angled ");
            }
            break;
            case 3:
            printf("Enter sides of triangle : ");
            scanf("%d%d%d",&a,&b,&c);
            if((a==b&&a==c)||(b==c&&b==a)||(c==a&&c==b))
            {
                printf("Equilater triangle ");
            }
            else
            {
                printf("Triangle is not equilateral ");
            }
            break;
            case 4:
            exit(0);
            default:
            printf("Invalid choice !");
            break;
        }
        printf("\n\nEnter any key to show menu : ");
        getch();
    }
    return 0;
}
*/
/*
// Question number 3
int main()
{
    int day_number;
    do
    {
        printf("\n1 to 7. day number ( starting from Monday ) : ");
        printf("\n\n0. for Exit : ");
        printf("\n\nEnter your choice : ");
        scanf("%d", &day_number);
        switch (day_number)
        {
        case 1:
            printf("Happy Somari!");
            break;
        case 2:
            printf("Tuesday Jai shree Ram !");
            break;
        case 3:
            printf("Wednesday ! Hello");
            break;
        case 4:
            printf("Thrusday Hi!");
            break;
        case 5:
            printf("Friday by!");
            break;
        case 6:
            printf("Saturday Half day ");
            break;
        case 7:
            printf("Sunday Holyday");
            break;
        default:
            printf("Invalid day number ");
            break;
        }
    }while(day_number);
}
*/
/*
// Question number 2
int main()
{
    int choice, number1, number2;
    while (1)
    {
        system("cls");
        printf("\n1.Addtion : ");
        printf("\n2.Subtraction : ");
        printf("\n3.Multiplication : ");
        printf("\n4.Division : ");
        printf("\n5.Exit : ");
        printf("\n\n\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter two numbers : ");
            scanf("%d%d", &number1, &number2);
            printf("\nSum is %d", number1 + number2);
            break;
        case 2:
            printf("Enter two numbers : ");
            scanf("%d%d", &number1, &number2);
            printf("\nDifference is %d ", number1 - number2);
            break;
        case 3:
            printf("Enter two numbers : ");
            scanf("%d%d", &number1, &number2);
            printf("\nMultiplication is %d", number1 * number2);
            break;
        case 4:
            printf("Enter two numbers : ");
            scanf("%d%d", &number1, &number2);
            printf("\nQuotient is %d", number1 / number2);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice!");
        }
        printf("\nEnter any key to show menu : ");
        getch();
    }
    return 0;
}
*/

/*
//Question number 1
int main()
{
    int number;
    printf("Enter month number : ");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("January - 31 days !");
        break;
    case 2:
        printf("February 29 / 28 ");
        break;
    case 3:
        printf("March - 31 days!");
        break;
    case 4:
        printf("April - 30 days !");
        break;
    case 5:
        printf("May - 31 days ");
        break;
    case 6:
        printf("June - 30 days");
        break;
    case 7:
        printf("July - 31 days");
        break;
    case 8:
        printf("August - 31 days ");
    case 9:
        printf("Septimber - 30 days ");
        break;
    case 10:
        printf("October - 31 days ");
        break;
    case 11:
        printf("November - 30 days ");
        break;
    case 12:
        printf("December - 31 days ");
        break;
    default:
        printf("Invalid month number ");
        break;
    }
    return 0;
}
*/
