// Question number 1
#include<iostream>
#include<math.h>
using namespace std;
int check_prime_not(int);
int highest_value_digit(int);
int power(int,int);
int check_fib(int);
void swap(int&,int&);
int sum(int,int=0,int=0);
float area(float);
float area(float,float);
float area(float,float,float);
float sum(int,float);
float sum(int,char);
int maxi(int,int);
int maxi(float,float);
void print_pascal(int);
int fact(int);
int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    print_pascal(number);
    return(0);
}

// Question number 1
int check_prime_not(int number)
{
    int i;
    for(i=2;i<=number/2;i++)
    {
        if(number%i==0)
            break;
    }
    if(i>number/2)
        return 1;
    else
        return 0;
}

// Question number 2
int highest_value_digit(int number)
{
    int hvg=0;
    while(number)
    {
        if(hvg<number%10)
            hvg=number%10;
        number=number/10;
    }
    return hvg;
}

// Question number 3
int power(int x,int y)
{
    int i,p=1;
    for(i=1;i<=y;i++)
    {
        p=p*x;
    }
    return p;
}

// Question number 4
void print_pascal(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*(fact(i-j)));
        }
        cout<<endl;
    }

}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f*=i;
    return f;
}

// Question number 5
int check_fib(int number)
{
    int temp;
    int firts_term=0,second_term=1;
    if(firts_term==number||second_term==number)
        return 1;
    do
    {
        temp=firts_term;
        firts_term=second_term;
        second_term=temp+second_term;
        if(firts_term+second_term==number)
            return 1;
    }while(firts_term+second_term<=number);
    return 0;

}

// Question number 6
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

// Question number 7
int sum(int number_1,int number_2,int number_3)
{
    return(number_1+number_2+number_3);
}

// Question number 8
float area(float radius)
{
    float PI=3.14;
    return(PI*radius*radius);
}

float area(float l,float b)
{
    return(l*b);
}

float area(float a,float b,float c)
{
    float s=(a+b+c)/2,ar;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return(ar);
}

// Question number 10
float sum(int number_1,float number_2)
{
    return(number_1+number_2);

}

float sum(int number_1,char ch)
{
    return(number_1+ch);
}

// Question number 9
int maxi(int number_1,int number_2)
{
    return(number_1>number_2?number_1:number_2);
}

int maxi(float number_1,float number_2)
{
    int max;
    max=int(number_1>number_2?number_1:number_2);
    return max;
}