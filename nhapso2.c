#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    do
    {
        printf("Nhap so nguyen: ");
        scanf("%d", &n);
    } while (n > 10 && n < 100);
    do
    {
        printf("Nhap sai\n");
        printf("Nhap lai: ");
        scanf("%d", &n);
    } while (!(n > 10 && n < 100));
    getch();
}