#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a = 1, n, x, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a power: ");
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        a *= n;
    }
    printf("%d^%d=%d", n, x, a);
    getch();
}