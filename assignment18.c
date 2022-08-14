#include <stdio.h>
#include <string.h>
int length_string(char str[]);
void reverse_string(char str[]);
int comp_string(char str1[], char str2[]);
void upper_case(char str[]);
void lower_case(char str[]);
int Alphn(char str[]);
int palindrone(char str[]);
int count_words(char str[]);
void reverse_string_word(char str[]);
void repeated_character(char str[]);
int compare(char str1[],char str2[]);
int main()
{
    char str1[100],str2[100];
    int c;
    printf("Enter a string : ");
    fgets(str1, 100, stdin);
    printf("Ener second string : ");
    fgets(str2,100,stdin);
    c=compare(str1,str2);
    if(c==0)
        printf("Both strings are same!");
    else if(c>0)
        printf("Strings are Opposite in dictionary order!");
    else
        printf("Strings are in dictionary order!");
    return 0;
}
// Question number 1
int length_string(char str[])
{
    int i;
    for (i = 0; str[i]; i++)
        ;
    return i;
}
// Question number 2
void reverse_string(char str[])
{
    int l, i;
    char ch;
    for (l = 0; str[l]; l++)
        ;

    for (i = 0; i < l / 2; i++)
    {
        ch = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = ch;
    }
}

// Question number 3
int compare(char str1[],char str2[])
{
    int i,j;
    for(i=0;str1[i]||str2[i];i++)
    {
        if(str1[i]-str2[i]==0)
            continue;
        else if(str1[i]>str2[i])
            return 1;
        else
            return -1;
    }
    return 0;
}
// Question number 4
void upper_case(char str[])
{
    int i;
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
}

// Question number 5
void lower_case(char str[])
{
    int i;
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 'Z')
            str[i] += 32;
    }
}

// Question number 6
int Alphn(char str[])
{
    int flag1 = 0, flag2 = 0, i;
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            flag1 = 1;
        else if (str[i] >= '0' && str[i] <= '9')
            flag2 = 1;
        if (flag1 && flag2)
            return 1;
    }
    return 0;
}
// Question number 7
int palindrone(char str[])
{
    int i, l;
    for (l = 0; str[l]; l++)
        ;

    for (i = 0; i < l / 2; i++)
    {
        if (str[i] != str[l - 2 - i])
            return 0;
    }
    return 1;
}
// Question number 8
int count_words(char str[])
{
    int i, j, count = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == 10)
            count++;
        i++;
    }
    return count;
}
void reverse_string_word(char str[])
{
    int l, i, k;
    l = strlen(str);
    for (i = l; i > -1; i--)
    {
        if (str[i] == 32 || i == 0)
        {
            for (k = i + 1; k != 32; k++)
                printf("%c", str[k]);
        }
    }
}
/*
// Try again below problem
9. Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” )
10. Write a function to find the repeated character in a given string
*/
void repeated_character(char str[])
{
    int i, j, count = 0, r=-1, wcount = 0;
    for (i = 0; str[i]; i++)
    {
        count = 0;
        for (j = i + 1; str[j]; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (wcount < count)
        {
            wcount = count;
            r = i;
        }
    }
    if(r==-1)
        printf("No repeated character found!");
    else
        printf("Repeated character = %c",str[r]);
     
    
}

 