#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, a[n], s0 = 0, s1 = 0;
    printf("Nhap so phan tu: n=");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Nhap vao a[%d]=\n", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        s0 += a[i];
    }
    printf("Tong cac phan tu =%d\n", s0);
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("Cac so le: %d ", a[i]);
        }
    }
    for (i = 0; i < n; i++)
    {
        if ( a[i] % 2 == 0)
        {
            int dem = 0;
            s1 += a[i];
            dem += 1;
            printf("Tong cac so chan= %d\n ", s1);
            printf("So so chan =%d\n", dem);
        }
    }
    getch();
}