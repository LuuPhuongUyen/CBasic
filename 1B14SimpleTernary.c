#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("n="); scanf("%d", &n);
    (n%2==0) ? (printf("Divisible")) : (printf("Not divisible"));
    getch();
    return 0;
}