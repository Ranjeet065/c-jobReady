#include<stdio.h>
#include<conio.h>
/*
//Question 1
//Write a program to print MySirG N times on the screen
int main()
{
    int i,n;
    printf("How many times do you want to print : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("MySirG\n");
    }
    return(0);
}
*/

/*
//Question 2
//Write a program to print the first N natural numbers.
int main()
{
    int i,n;
    printf("Enter a natural number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    return(0);
}
*/

/*
//Question 3
//Write a program to print the first N natural numbers in reverse order
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n)
    {
        printf("%d ",n);
        n--;
    }
    return(0);
}
*/

/*
//Question 4
//Write a program to print the first N odd natural numbers
int main()
{
    int i=1,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d  ",2*i-1);
        i++;
    }
    return(0);
}
*/

//Question 5
//Write a program to print the first N odd natural numbers in reverse order.
/*int main()
{
    int n,i=1;
    printf("Enter a natural number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",2*(n+1-i)-1);
        i++;
    }
    return(0);
}
 
//second method for Quetion 5.
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n)
    {
        printf("%d  ",2*n-1);
        n--;
    }
    return(0);
}
*/

/*
//Question 6
//Write a program to print the first N even natural numbers
int main()
{
    int i,n;
    printf("Enter how many even natural number do want to print : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d  ",2*i);
    }
    return(0);
}
*/

/*
//Question 7
//Write a program to print the first N even natural numbers in reverse order
int main()
{
    int n;
    printf("Enter a natural number : ");
    scanf("%d",&n);
    while(n)
    {
        printf("%d\t",2*n);
        n--;
    }
    return(0);
}
*/

/*
//Question 8
// Write a program to print squares of the first N natural numbers
int main()
{
    int i,n;
    printf("Enter a natural number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d  ",i*i);
    }
    return(0);
}
*/

/*
//Question 9
//Write a program to print cubes of the first N natural numbers
int main()
{
    int i=1,number;
    printf("How many cubes of natural number do you want to print : ");
    scanf("%d",&number);
    while(i<=number)
    {
        printf("%d  ",i*i*i);
        i++;
    }
    return(0);
}
*/

//Question 10
// Write a program to print a table of N.
int main()
{
    int i=1,number;
    printf("Enter a natural number for table printing : ");
    scanf("%d",&number);
    while(i<=10)
    {
        printf("%d x %d = %d\n",number,i,number*i);
        i++;
    }
    return(0);
}



 