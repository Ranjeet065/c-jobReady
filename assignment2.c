#include <stdio.h>
#include <conio.h>
/*
// Question number 1.
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    printf("Unit digit of %d number = %d",number,number%10);
    return(0);
}
*/

/*
// Question number 2.

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    printf("Number without last digit = %d",number/10);
    getch();
    return(0);
}
*/

/*
// Question number 3
int main()
{
    int number1,number2,temp;
    printf("Enter two numbers : ");
    scanf("%d%d",&number1,&number2);
    printf("Number before swaping !\n");
    printf("%d and %d ",number1,number2);
    temp=number1;
    number1=number2;
    number2=temp;
    printf("\nNumber after swap : \n%d and %d",number1,number2);
    getch();
    return 0;
}
*/

/*
// Question number 4.

int main()
{
    int number1,number2;
    printf("Enter two numbers : ");
    scanf("%d%d",&number1,&number2);
    number1=number1+number2;
    number2=number1-number2;
    number1=number1-number2;
    printf("Number agter swaping \n");
    printf("%d and %d ",number1,number2);
    return 0;

}
*/

/*
// Question number 5
int main()
{
    int number;
    int sum=0;
    printf("Enter three a digit number : ");
    scanf("%d",&number);
    while(number)
    {
        sum=sum+number%10;
        number=number/10;
    }
    printf("Sum of three-digit number : %d",sum);
    return 0;
}
*/

/*
// Question number 6
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    printf("ASCII Code = %d",ch);
    return(0);
}
*/

/*
// Question number 7 handle later.
int main()
{
    int number;
}
*/

/*
// Question number 8
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    if(number&1)
    {
        printf("Odd number!");
    }
    else
    {
        printf("Even number!");
    }
}

*/

/*

// Question number 9

int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("\nSize of int variable is %d",sizeof(a));
    printf("\nSize of float variable is %d",sizeof(b));
    printf("\nSize of char variable is %d ",sizeof(c));
    printf("\nSize of double variable is %d",sizeof(d));
    printf("\nSize of int data type is %d",sizeof(int));
    printf("\nSize of float data type is %d",sizeof(float));
    printf("\nSize of char data type is %d",sizeof(char));
    printf("\nSize of double data type is %d",sizeof(double));
    printf("\nSize of integer constant is %d",sizeof(30));
    printf("\nSize of character constant is %d",sizeof('A'));
    printf("\nSize of Real constant is %d",sizeof(3.33));
    printf("\n\nSize of Real constant is %d",sizeof(100.33));
    getch();
    return(0);
}

*/

/*
// Question number 10

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    number=number/10;
    number *=10;
    printf("Number : %d",number);
    return(0);
}

*/

/*
// Question number 11
int main()
{
    int number;
    int digit;
    printf("Enter a number : ");
    scanf("%d",&number);
    printf("Enter a digit that you want to append : ");
    scanf("%d",&digit);
    number=number*10;
    number+=digit;
    printf("After appending number = %d",number);
    getch();
    return(0);

}
*/


/*
// Question number 12
int main()
{
    float inr,usd,result;
    printf("Enter amount in INR : ");
    scanf("%f",&inr);
    usd=inr/76.23;
    printf("Amount is USD = %f",usd);
    return(0);
}
*/


/*
// Question number 13
int main()
{
    int number,digit;
    printf("Enter a three digit number : ");
    scanf("%d",&number);
    digit=number%10;
    number/=10;
    digit=digit*100;
    number=digit+number;
    printf("Rotated number = %d",number);
    return(0);
}
*/


/*
1. Write a program to print unit digit of a given number
2. Write a program to print a given number without its last digit.
3. Write a program to swap values of two int variables
4. Write a program to swap values of two int variables without using a third variable.
5. Write a program to input a three-digit number and display the sum of the digits.
6. Write a program which takes a character as an input and displays its ASCII code.
7. Write a program to find the position of first 1 in LSB.
8. Write a program to check whether the given number is even or odd using a bitwise
operator.
9. Write a program to print size of an int, a float, a char and a double type variable
10. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)
11. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)
12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.
13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right

*/