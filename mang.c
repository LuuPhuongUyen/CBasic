#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, a[n];
    printf("Nhap so phan tu: n=");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Nhap vao a[%d]=\n", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Gia tri a[%d]=%d\n", i, a[i]);
    }

    for (i = n - 1; i >= 0; i--)

    {
        printf("Gia tri a[%d]=%d\n", i, a[i]);
    }
    getch();
}