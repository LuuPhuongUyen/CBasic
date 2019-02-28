#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, i, c;
    printf("Nhap n = ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("It is not a prime number", n);
        getch();
        return 0;
    }
    c = 0;
    for (i = 2; i <= n / 2; i++)
    { 
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 0)
    {
        printf("It is a prime number", n);
    }
    else
    {
        printf("It is not a prime number", n);
    }
getch();
}