#include <stdio.h>
#include <conio.h>

int main()
{
    int n, d, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        d = (n % 10);
        s += d;
        n /= 10;
    }
    printf("Sum of digits = %d", s);
    getch();
}