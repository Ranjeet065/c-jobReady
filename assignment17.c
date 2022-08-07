#include <stdio.h>
// ASSIGNMENT 17 IS DONE
/*
// Question number 1
int main()
{
    int l;
    char str[30];
    printf("Enter a string : ");
    fgets(str, 30, stdin);
    for (l = 0; str[l]; l++)
        ;
    printf("Length = %d", l - 1);
    return 0;
}
*/
/*
// Question number 2
int main()
{
    char str[50], ch;
    int i, count = 0;
    printf("Enter a string : ");
    fgets(str, 50, stdin);
    printf("Enter a character that you want to count : ");
    scanf("%c", &ch);
    for (i = 0; str[i]; i++)
    {
        if (str[i] == ch)
            count++;
    }
    printf("\n%c in string is %d", ch, count);
    return (0);
}
*/
/*
// Question number 3
int main()
{
    char str[50], ch[] = "aeiouAEIOU";
    int i, j, count = 0;
    printf("Enter a string in which you want to count vowels : ");
    fgets(str,50,stdin);
    for (i = 0; str[i]; i++)
    {
        for (j = 0; ch[j]; j++)
        {
            if (str[i] == ch[j])
                count++;
        }
    }
    printf("Total number of vowels = %d", count);
    return 0;
}
*/
/*
// Question number 4
int main()
{
    char str[30];
    int i;
    printf("Enter a string  : ");
    fgets(str, 30, stdin);
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
    printf("Upper case string is \n%s",str);
    return 0;
}
*/
/*
//Question number 5
int main()
{
    char str[30];
    int i;
    printf("Enter a string  ");
    fgets(str,30,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>=65&&str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("Lower case string \n%s",str);
    return(0);
}
*/
/*
//Question number 6
int main()
{
    char str[30];
    int l,i;
    printf("Enter a string : ");
    fgets(str,30,stdin);
    for (l = 0; str[l]; l++)
        ;
    printf("\n\nLength of string is %d", l-1);
    return (0);
}
*/
/*
//Question number 7
int main()
{
    char str[50];
    int i,Acount=0,Dcount=0,Scount=0;
    printf("Enter a string : ");
    fgets(str,50,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>='0'&&str[i]<='9')
           Dcount++;
        else if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
            Acount++;
        else
            Scount++;
    }
    printf("\nTotal digit = %d",Dcount);
    printf("\nTotal Alphabet = %d",Acount);
    printf("\nTotal Special = %d",Scount-1);
    return 0;
}
*/
/*
//Question number 8
int main()
{
    char str1[50],str2[20];
    int l,i;

    printf("Enter first string : ");
    fgets(str1,50,stdin);

    printf("Enter second string : ");
    fgets(str2,20,stdin);
    for(l=0;str1[l];l++);
    for(i=0;i<=20;i++)
    {
        printf("%d  ",str1[i]);
    }
    printf("\n\n");
    for(i=0;i<=10;i++)
    {
        printf("%d  ",str2[i]);
    }
    printf("\n\n");
    for(i=0;str2[i];i++)
    {
        str1[l-1+i]=str2[i];
    }

    for(i=0;str1[i];i++)
    {
        printf("%c",str1[i]);
    }

    return (0);
}
*/

/*
//Question number 9
int main()
{
   char str[30], temp;
   int i, j;
   printf("Enter a string : ");
   fgets(str, 30, stdin);
   for (i = 0; str[i]; i++)
   {
       for (j = i + 1; str[j]; j++)
       {
           if (str[i] > str[j])
           {
               temp = str[i];
               str[i] = str[j];
               str[j] = temp;
           }
       }
   }
   printf("\n\nSorted string \n");
   printf("%s", str);
   return (0);
}
*/

// Question number 10
int main()
{
    char str[30], temp;
    int i, j, count = 0, wcount = 0;
    printf("Enter a string : ");
    gets(str);
    for (i = 0; str[i - 1]; i++)
    {
        for (j = i + 1; str[j]; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    i = 0;
    while (str[i])
    {
        for (j = i; str[j]; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        wcount = count - wcount;
        printf("%c   =  %d\n", str[i], wcount);
        wcount = count;
        i = count;
    }
    return 0;
}
