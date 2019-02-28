#include <stdio.h>
#include <conio.h>

int main()
{
    int a[50][50];
    int i, j, m, n, s = 0;
    printf("nhap so hang n=");
    scanf("%d", &n);
    printf("nhap so cot m=");
    scanf("%d", &m);
    printf("nhap vao mang:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf('Nhap vao a[%d][%d]:', i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] % 5 == 0)
            {
                s += a[i][j];
            }
            printf("Tong cac so chia het cho 5=", s);
        }
        getch();
    }
