#include <stdio.h>
#include <conio.h>
/*
// Question number 1
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
/*
// Question number 2
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j >= 6 - i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
/*
// Question number 3
int main()
{
    int i, j;
    for (i = 1; i <= 5; ++i)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j <= 6 - i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return (0);
}
*/
/*
//Question number 4
int main()
{
    int i,j;
    for(i=1;i<=5;++i)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return(0);
}
*/
/*
// Question number 5
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; ++j)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
/*
// Question number 6
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j >= i && j <= 10 - i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return (0);
}
*/
/*
// Question number 7
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (j <= 6 - i || j >= 5 + i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
/*
//Question number 8
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                printf("%d ",k);
                if(j<4)
                {
                    k++;
                }
                else
                {
                    k--;
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return(0);
}
*/
/*
//Question number 9
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
                printf("%d ",k);
                if(j<4)
                {
                    k++;
                }
                else
                {
                    k--;
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return(0);
}
*/
/*
//Question number 10
int main()
{
    int i,j;
    int k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
            {
                printf("%d ",k);
                if(j<4)
                {
                    k++;
                }
                else
                {
                    k--;
                }
            }
            else
            {
                printf("  ");
                if(j==4)
                {
                    k--;
                }
            }
        }
        printf("\n");
    }
    return(0);
}
*/
/*
//Question number 11
int main()
{
    int i,j;
    char ch;
    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                printf("%c ",ch);
                if(j<5)
                {
                    ch++;
                }
                else{
                    ch--;
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return(0);
}
*/
/*
//Question number 12
int main()
{
    int i,j;
    char ch;
    for(i=1;i<=4;i++)
    {
        ch='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
                printf("%c ",ch);
                if(j<4)
                    ch++;
                else
                    ch--;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return(0);
}
*/
/*
//Question number 13
int main()
{
    int i,j;
    char ch;
    for(i=1;i<=7;i++)
    {
        ch='A';
        for(j=1;j<=13;j++)
        {
            if(j<=8-i||j>=6+i)
            {
                printf("%c ",ch);
                if(j<7)
                {
                    ch++;
                }
                else
                {
                    ch--;
                }
            }
            else
            {
                printf("  ");
                if(j==7)
                    ch--;
            }
        }
        printf("\n");
    }
    return(0);
}
*/
/*
//Question number 14
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((j==i||j==1)||(i==5&&j<=5))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return(0);
}
*/
/*
//Question number 15
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((j==6-i||j==5)||(i==5&&j<=5))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return(0);
}
*/
/*
//Question number 16
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((j==6-i||j==4+i)||(i==5&&j<=9))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n\n");
    }
    return(0);
}
*/
/*
//Question number 17
int main()
{
    int i,j;
    printf("\n\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((j==i||j==10-i)||(i==1&&j<=9))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n\n");
    }
    return(0);
}
*/
/*
//Question number 18
int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if ((j >= 6 - i && j <= 4 + i) && (j >= i - 4 && j <= 14 - i))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n\n");
    }
    return (0);
}
*/
// Question number 19
int main()
{
    int i,j;
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(((j>=4-i&&j<=6+i)||(j>=14-i&&j<=16+i))&&(j>=i-3&&j<=23-i))
            {
                if((i==4)&&(j==7))
                {
                    printf("M y S i r G ");
                    j=12;
                }
                else
                { 
                    printf("* ");
                }
                
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n\n");
    }
    return 0;
}