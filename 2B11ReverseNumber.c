#include <stdio.h>
#include <conio.h>

int main()
{
    int n, rn = 0, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        d = (n % 10);
        rn = rn * 10 + d;
        n /= 10;
    }
    printf("Reverse number: %d", rn);
    getch();
}