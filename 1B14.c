#include <stdio.h>
int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    (1.0*(number % 2) == 0) ? printf("%d is even.", number) : printf("%d is odd.", number);
getch();
    return 0;
}