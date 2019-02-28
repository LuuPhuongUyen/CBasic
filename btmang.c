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
        if (a[i] % 2 == 0)
        {
            int dem = 0;
            s1 += a[i];
            dem += 1;
            printf("Tong cac so chan= %d\n ", s1);
            printf("So so chan =%d\n", dem);
        }
    }
    int x, vt;
    if (vt >= 0 && vt <= n)
    {
        for (int i = 0; i < n; i++)
            printf("%d", a[i]);
        a[n] = x;
        n++;
    }
    else
    {
        printf("\nVi tri %d khong hop le.", vt);
    }
    int k;
    printf("Nhap vi tri phan tu");
    scanf("%d", &k);

    if (k >= n + 1)
        printf("Khong thoa man\n");
    else
    {
        for (i = k - 1; i < n - 1; i++)
            a[i] = a[i + 1];

        printf("Mang:\n");

        for (i = 0; i < n - 1; i++)
            printf("%d\n", a[i]);
    }
    getch();
}