#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int i, n, d = 0, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
   
    for (i = 1; i <= n; i++)
    {
        d = 3 * pow(10, (i-1)) + d;
        s += d;
        printf("%d+", d);
    }
    printf("=%d", s);
    getch();
}