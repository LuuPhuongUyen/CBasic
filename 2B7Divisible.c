#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, d;
    printf("Enter number: n=");
    scanf("%d", &n);
    printf("Enter number: d=");
    scanf("%d", &d);
    for (i = 1; i <= n; i++)
    {
        if (i % d == 0)
        {
            printf("%d ", i);
        }
    }
    getch();
}