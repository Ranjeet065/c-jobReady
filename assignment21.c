// Assignment21 is completed/ Done
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct employee input();
void display(struct employee);
struct employee heigest_salary(struct employee *, int);
void sort_employee_salary(struct employee *, int);
void sort_name(struct employee *, int);

// Question number 1
struct employee
{
    int id;
    char name[50];
    float salary;
};
struct time
{
    int h;
    int m;
    int s;
};
struct student
{
    int roll_no;
    char name[50];
    float marks;
    int class;
};
struct student9
{
    int roll_no;
    int class;
    char name[50];
    float marks;
};
// Question 10 structure
struct marks
{
    int roll_no;
    char name[50];
    float chem_marks;
    float math_marks;
    float phy_marks;
};

void input_time(struct time *);
void display_time(struct time *);
struct time time_difference(struct time, struct time);
void input_studentData(struct student *, int);
void display_studentData(struct student *, int);
void get_studentData(struct student9 *, int);
void put_studentData(struct student9 *, int);
// Question 10 function delaration
void input_marks(struct marks *, int);
void display_percentage(struct marks *, int);
int main()
{
    int number;
    struct marks *ptr;
    printf("Enter Number of student that you like to store info : ");
    scanf("%d", &number);
    ptr = (struct marks *)malloc(number * sizeof(struct marks));
    input_marks(ptr, number);
    display_percentage(ptr, number);
    return 0;
}
// Question number 2
struct employee input()
{
    struct employee e;
    printf("Enter Id , Name and Salary : ");
    scanf("%d", &e.id);
    fflush(stdin);
    fgets(e.name, 50, stdin);
    e.name[strlen(e.name) - 1] = '\0';
    scanf("%f", &e.salary);
    return e;
}
// Question number 3
void display(struct employee e)
{
    printf("\n%d   %s   %f", e.id, e.name, e.salary);
}

// Question number 4
struct employee heigest_salary(struct employee *ptr, int size)
{
    struct employee temp;
    int i;
    float max_salary;
    max_salary = (ptr + 0)->salary;

    for (i = 1; i < size; i++)
    {
        if (max_salary < (ptr + i)->salary)
        {
            temp.id = (ptr + i)->id;
            strcpy(temp.name, (ptr + i)->name);
            temp.salary = (ptr + i)->salary;
            max_salary = (ptr + i)->salary;
        }
    }
    return temp;
}
void sort_employee_salary(struct employee *ptr, int size)
{
    int round, i;
    struct employee temp;
    for (round = 1; round < size; round++)
    {
        for (i = 0; i < size - round; ++i)
        {
            if ((ptr + i)->salary > (ptr + i + 1)->salary)
            {
                temp = ptr[i];
                ptr[i] = ptr[i + 1];
                ptr[i + 1] = temp;
            }
        }
    }
}
void sort_name(struct employee *p, int size)
{
    struct employee temp;
    int i, round;
    for (round = 1; round < size; round++)
    {
        for (i = 0; i < size - round; i++)
        {
            if ((p + i)->name[0] > (p + i + 1)->name[0])
            {
                temp = p[i];
                p[i] = p[i + 1];
                p[i + 1] = temp;
            }
            else if ((p + i)->name[0] == (p + i + 1)->name[0])
            {
                if ((p + i)->name[1] > (p + i + 1)->name[1])
                {
                    temp = p[i];
                    p[i] = p[i + 1];
                    p[i + 1] = temp;
                }
            }
        }
    }
}

void input_time(struct time *p)
{
    printf("Enter time (HH::MM::SS) : ");
    scanf("%d%d%d", &p->h, &p->m, &p->s);
}
void display_time(struct time *p)
{
    printf("\n%d : %d : %d", p->h, p->m, p->s);
}

struct time time_difference(struct time t1, struct time t2)
{
    struct time t;
    int d1, d2, d3;
    d1 = t1.h * 60 * 60 + t1.m * 60 + t1.s;
    d2 = t2.h * 60 * 60 + t2.m * 60 + t2.s;
    if (d1 > d2)
        d3 = d1 - d2;
    else
        d3 = d2 - d1;
    t.h = d3 / (60 * 60);
    d3 = d3 % (60 * 60);
    t.m = d3 / 60;
    d3 = d3 % 60;
    t.s = d3;
    return t;
}

void input_studentData(struct student *ptr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter %d student data : ", i + 1);
        scanf("%d", &(ptr + i)->roll_no);
        fflush(stdin);
        fgets((ptr + i)->name, 50, stdin);
        (ptr + i)->name[strlen((ptr + i)->name) - 1] = '\0';
        scanf("%f", &(ptr + i)->marks);
        scanf("%d", &(ptr + i)->class);
    }
}
void display_studentData(struct student *ptr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("\n%d  %s  %f  %d", (ptr + i)->roll_no, (ptr + i)->name, (ptr + i)->marks, (ptr + i)->class);
    }
}
// Question number 9

void get_studentData(struct student9 *ptr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter information of %d student(roll,,class ,name and marks)  : ", i + 1);
        scanf("%d", &(ptr + i)->roll_no);
        scanf("%d", &(ptr + i)->class);
        fflush(stdin);
        fgets((ptr + i)->name, 50, stdin);
        (ptr + i)->name[strlen((ptr + i)->name) - 1] = '\0';
        scanf("%f", &(ptr + i)->marks);
    }
}

void put_studentData(struct student9 *ptr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("\n%d   %d    %s     %f", (ptr + i)->roll_no, (ptr + i)->class
               ,
               (ptr + i)->name, (ptr + i)->marks);
    }
}

// Question 10 function to get information from user
void input_marks(struct marks *ptr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter Student Details= %d(Roll number , Name,Chem Marks, Math_marks and phy_marks ) : ", i + 1);
        scanf("%d", &(ptr + i)->roll_no);
        fflush(stdin);
        fgets((ptr + i)->name, 50, stdin);
        (ptr + i)->name[strlen((ptr + i)->name) - 1] = '\0';
        scanf("%f%f%f", &(ptr + i)->chem_marks, &(ptr + i)->math_marks, &(ptr + i)->phy_marks);
    }
}
// Question 10 function to print student details
void display_percentage(struct marks *ptr, int size)
{
    float total_obtain_marks, per;
    int i;
    for (i = 0; i < size; i++)
    {
        total_obtain_marks = (ptr + i)->chem_marks + (ptr + i)->math_marks + (ptr + i)->phy_marks;
        per = total_obtain_marks / 3;
        printf("\n%d    %s     %.2f %%", (ptr + i)->roll_no, (ptr + i)->name, per);
        total_obtain_marks = 0;
    }
}
