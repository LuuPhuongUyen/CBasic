#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    while (n <= 10 || n >= 100)
    {
        printf("Nhap sai\n");
        printf("Nhap lai: ");
        scanf("%d", &n);
    }
    getch();
}