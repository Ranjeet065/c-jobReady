#include<stdio.h>
#include<conio.h>
/*
1. Write a program to print Hello Students on the screen.
int main()
{
    printf("Hello Students");
    getch();
    return 0;
}

//2. Write a program to print Hello in the first line and Students in the second line.

int main()
{
    printf("Hello\nStudents");
    getch();
    return 0;
}

 

//3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes)

int main()
{
    printf("\"MySirG\"");
    getch();
    return(0);
}


//4. WAP to find the area of the circle. Take radius of circle from user as input and print the
//result in below given format.
//Expected output format – “Area of circle is A having the radius R”. Replace A with area
//& R with radius.

int main()
{
    float radius;
    float area;
    printf("Enter radius of the circle : ");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("\"Area of circle is %f having the radius %f\"",area,radius);
    getch();
    return 0;
}

//5. WAP to calculate the length of String using printf function.

int main()
{
    int x;
    x=printf("string length is \n");
    printf("%d",x);
    getch();
    return 0;
}
 


//6. WAP to print the name of the user in double quotes.
//   Expected output format – “Hello , Amit Kumar”

int main()
{
    printf("\"Hello , Ranjeet kumar\"");
    getch();
    return 0;
}

7. WAP to print “%d” on the screen.


// 7. WAP to print “%d” on the screen.

// first method to print %d
int main()
{
    printf("%%d");
    getch();
    return 0;
}


// second method to print %d

int main()
{
    char ch='%';
    printf("%cd",ch);
    getch();
    return(0);
}


// 8. WAP to print “\n” on the screen.

int main()
{
    printf("\"\\n\"");
    return(0);
}


*/

//9. WAP to print “\\” on the screen.

/*
int main()
{
    printf("\"\\\\\"");
    getch();
    return 0;
}

*/


/*

/*10. WAP to take date as an input in below given format and convert the date format and
display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)


int main()
{
    int d,m,y;
    char ch1,ch2;
    printf("Enter date (dd/mm/yyyy) : ");
    scanf("%d%d%d",&d,&m,&y);
    printf("Day - %d , Month - %d , Year - %d",d,m,y);
    getch();
    return 0;
}

*/

/*
//11. WAP to take time as an input in below given format and convert the time format and
//display the result as given below.
//User Input date format – “HH:MM”
//Output format – “HH hour and MM Minute”
//Example –
//“11:25” converted to “11 Hour and 25 Minute”

int main()
{
    int h,m;
    char ch=':';
    printf("Enter time (HH:MM) : ");
    scanf("%d%d",&h,&m);
    printf("%d Hour and %d Minute",h,m);
    return(0);
}

*/
/*

12. Find output of below code:
int main()
{
int x = printf(“ineuron”);
printf(“%d”,x);
return 0;
}

*/

// Result is ineuron7


int main()
{
    int x=printf("ineuron");
    printf("\nLengh of string in printf function :  %d",x);
    return(0);
}