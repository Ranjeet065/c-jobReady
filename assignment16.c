#include <stdio.h>
/*
// Addition of two matrices
// Question number 1
int main()
{
    int i, j;
    int a[3][3], b[3][3], c[3][3];
    printf("Enter first matrix : ");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter second matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n\nAddition of two matrix : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return (0);
}
*/
/*
//Question number 2
//Multiplication of two matrices
int main()
{
    int i, j, k, a[3][3], b[3][3], c[3][3], p;
    printf("Ener first matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter second matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nProduct of two matirces \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            p = 0;
            for (k = 0; k < 3; k++)
            {
                p += a[i][k] * b[k][j];
            }
            c[i][j] = p;
            printf("%d", p);
        }
        printf("\n");
    }
    return (0);
}
*/
/*
//Question number 3
//Transpose of given matrix
int main()
{
    int a[3][3], i, j;
    printf("Enter elements of matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nTranspose of matrix \n");
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return (0);
}
*/
/*
// Question number 4
// Sum of left diagonal
int main()
{
    int i, j, a[3][3], sum_diagonal_left = 0;
    printf("Enter matrix elements : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum_diagonal_left += a[i][j];
            }
        }
    }
    printf("Sum of Left diagonal = %d", sum_diagonal_left);
    return 0;
}
*/

/*
//Question number 5
//Sum of right diagonal
int main()
{
    int i, j, a[3][3], sum_right_diagonal = 0;
    printf("Enter matrix elements : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i + j == 2)
                sum_right_diagonal += a[i][j];
        }
    }
    printf("\n\nSum right diagonal  = %d", sum_right_diagonal);
    return (0);
}
*/
/*
// Question number 6
//Sum of row and column
int main()
{
    int arr[3][3], i, j, sr = 0, sc = 0;
    printf("Enter nine numbers for matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        sr = 0;
        for (j = 0; j < 3; j++)
        {
            sr += arr[i][j];

            printf("%d  ", arr[i][j]);
        }
        printf("%d  ", sr);
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        sc = 0;
        for (j = 0; j < 3; j++)
        {
            sc += arr[j][i];
        }
        printf("%d ", sc);
    }
    return (0);
}
*/

/*
// Question number 7
int main()
{
    int arr[3][3], i, j;
    printf("Enter [3][3] marix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\nPrinting lower triangular matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j <= i)
                printf("%d  ", arr[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
    return (0);
}
*/

/*
// Question number 8
int main()
{
    int arr[3][3], i, j;
    printf("Enter arr[3][3] numbers : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n\nPrinting Upper triagular matrix \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j >= i)
                printf("%d  ", arr[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}
*/
// Question number 9
// Spares matrix
int main()
{
    int arr[3][3];
    int i, j, count_non_zero = 0, count_zero = 0;
    printf("Enter arr[3][3] : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
                count_zero++;
            else
                count_non_zero++;
        }
    }
    if (count_zero > count_non_zero)
        printf("Matrix is spares ");
    else
        printf("Matrix is not spares");
    return 0;
}
/*
// Question number 10
int main()
{
    int arr[3][3];
    int i, j, count = 0, r = 0, rn;
    printf("Enter elements : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        count = 0;
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (count > r)
        {
            r = count;
            rn = i;
        }
    }
    printf("Row with max 1 = %d", rn + 1);
    return 0;
}
*/