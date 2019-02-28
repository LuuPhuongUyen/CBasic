#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, kq = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        kq *= i;
        printf("%dx", i);
    }
    printf("%d=%d", i, kq * i);
    getch();
}