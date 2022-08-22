#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *input();
float *inputData(float *, int);
float calculate_average(float *, int);
int sum_Allelements(int *ptr, int size);
int *read_array(int *ptr, int size);
int max_element(int*,int);
int* bubble_sort(int*,int);
int* getData();
// Question number 8
int main()
{
    int *ptr;
    // here ptr is dagling pointer 
    ptr=getData();
     
    printf("%d",*(ptr+0));
    return 0;
}
int* getData()
{
    int a[5];
    printf("Enter five numbers : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",a+i);
    }
    return a;
}
/*
// Question number 10
int main()
{
     int number,i;
     int *ptr;
     printf("Enter size of the array : ");
     scanf("%d",&number);
     ptr=(int*)malloc(number*sizeof(int));
     for(i=0;i<number;i++)
     {
        printf("Enter %d number : ",i+1);
        scanf("%d",&ptr[i]);
     }
     ptr=bubble_sort(ptr,number);
     printf("Greatest number = %d",ptr[number-1]);
     printf("\nSmallest number = %d",ptr[0]);
     free(ptr);
     return 0;


}
*/

/*
// Question number 9
int main()
{
    int number;
    char *ptr=NULL;
    printf("Enter size of memory you like reserve (bytes) : ");
    scanf("%d",&number);
    fflush(stdin);
    ptr=(char*)malloc(number*sizeof(char));
    if(ptr!=NULL)
    {
        printf("Enter your name : ");
        fgets(ptr,number,stdin);
    }
    else
    {
        printf("Memory is not allocated!");
        return 1;
    }
    printf("%s",ptr);
    free(ptr);
    return 0;
}

*/
// Question number 7
/*
int main()
{
    int approx_character;
    char *ptr;
    printf("Enter approximate character in your name : ");
    scanf("%d",&approx_character);
    fflush(stdin);
    ptr=calloc(approx_character,sizeof(char));
    printf("Enter your name : ");
    fgets(ptr,approx_character,stdin);
    printf("%s",ptr);
    // Here we have to release the memory allocated by calloc function 
    // otherwise we will lose some amount of memory
    free(ptr);
    return 0;
}
*/

/*
// Question number 6
int main()
{
    int number, max, *ptr;
    printf("How many number do want to store : ");
    scanf("%d", &number);
    ptr = (int *)malloc(number * sizeof(int));
    for (int i = 0; i < number; i++)
    {
        scanf("%d", (ptr + i));
    }
    max = max_element(ptr, number);
    printf("Greatest number = %d", max);
    return 0;
}
*/

/*
// Question number 5
int main()
{
    int number, sum = 0;
    int *ptr;
    printf("Enter how many number you want to store : ");
    scanf("%d", &number);
    ptr = (int *)malloc(number * sizeof(int));
    ptr = read_array(ptr, number);
    sum = sum_Allelements(ptr, number);
    printf("Sum = %d", sum);
    return 0;
}
*/

// Question number 4
/*
int main()
{
    int num;
    char *ptr;
    printf("Enter how many character would you like to enter approxmately : ");
    scanf("%d",&num);
    fflush(stdin);
    ptr=(char*)malloc(num*sizeof(char));
    fgets(ptr,num,stdin);
    printf("%s",ptr);
    free(ptr);
    return 0;

}
*/
/*
// Question number 3
int main()
{
    int number,i;
    int *ptr,sum=0;
    printf("How many number would you like to sum : ");
    scanf("%d",&number);
    ptr=(int*)malloc(number*sizeof(int));
    for(i=0;i<number;i++)
    {
        scanf("%d",(ptr+i));
        sum+=ptr[i];
    }
    free(ptr);
    printf("Sum = %d",sum);
    return 0;
}
*/

/*
// Question number 2
int main()
{
    float num, avg;
    float *ptr;
    printf("Enter How many data value would you like to accommodate : ");
    scanf("%f", &num);
    ptr = (float *)calloc(num, sizeof(float));
    ptr = inputData(ptr, num);
    avg = calculate_average(ptr, num);
    printf("\n\nAverage = %f", avg);
    return 0;
}
// Question number 2 function.
float *inputData(float *ptr, int size)
{
    int i;
    printf("Enter %d data number : ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%f", (ptr + i));
    }
    return ptr;
}
// Function for Question 2
float calculate_average(float *ptr, int size)
{
    int i;
    float avg, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += ptr[i];
    }
    avg = sum / size;
    free(ptr);
    return avg;
}
*/

// Question number 1
char *input()
{
    int len;
    char *ptr;
    printf("Enter How many character would you like to store : ");
    scanf("%d", &len);
    ptr = (char *)malloc(len * sizeof(char));
    fflush(stdin);
    printf("Enter a string : ");
    fgets(ptr, len, stdin);
    return ptr;
}

/*1. Define a function to input variable length string and store it in an array without
memory wastage.
2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.
3. Write a program to calculate the sum of n numbers entered by the user using malloc
and free.
4. Write a program to input and print text using dynamic memory allocation.
5. Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.
6. Write a program in C to find the largest element using Dynamic Memory Allocation.
7. Write a program to demonstrate memory leak in C.
8. Write a program to demonstrate dangling pointers in C.
9. Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.
10. Find out the maximum and minimum from an array using dynamic memory allocation
in C
*/

// Question 10  function
int* bubble_sort(int *ptr,int size)
{
    int round,j,temp;
    for(round=1;round<size;round++)
    {
        for(j=0;j<size-round;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
    return ptr;
}
// Question 6 function
int max_element(int *ptr, int size)
{
    int i, max = ptr[0];
    for (i = 1; i < size; i++)
    {
        if (max < ptr[i])
            max = ptr[i];
    }
    free(ptr);
    return max;
}

// Question 5 function
int *read_array(int *ptr, int size)
{
    int i;
    printf("Enter %d numbers : ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", (ptr + i));
    }
    return ptr;
}
// Question 5 function
int sum_Allelements(int *ptr, int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += ptr[i];
    }
    free(ptr);
    return sum;
}