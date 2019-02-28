#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, tong = 0, a;
    printf("Nhap n=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Nhap so tiep theo:");
        scanf("%d", &a);
        tong += a; //tong = tong + a;
    }
    printf("Tong n so la %d", tong);
    getch();
}