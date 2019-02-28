#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, t = 0;
    while (n != 0)
    {
        printf("Enter number: ");
        scanf("%d", &n);
        t += n;
    }
    printf("Sum: %d", t);
    getch();
}