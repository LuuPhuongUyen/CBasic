#include <stdio.h>
#include <conio.h>

int main(void)
{
    int a;
    printf("Enter number a="); scanf("%d", &a);
    if (a==0)
    printf("The weekday is: Monday");
    else if (a==1)
    printf("The weekday is: Tuesday");
    else if (a==2)
    printf("The weekday is: Wednesday");
    else if (a==3)
    printf("The weekday is: Thursday");
    else if (a==4)
    printf("The weekday is: Friday");
    else if (a==5)
    printf("The weekday is: Saturday");
    else if (a==6)
    printf("The weekday is: Sunday");
    else printf("Invalid");
    getch();
}