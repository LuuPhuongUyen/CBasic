#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, k;
    printf("Enter number n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        { // Ở mỗi hàng, in ra khoảng trắng trước dấu *, số khoảng trắng = số cột - số dấu *
            if (j <= n - i)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (k = (n - i); k >= 1; k--) //khoảng trắng giảm dần qua mỗi hàng
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    for (i = n; i >= 1; i--)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}