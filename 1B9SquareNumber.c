#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n;
    printf("n="); scanf("%d", &n);
    int a = sqrt(n);
    if(a*a == n)
    {printf("%dx%d\n",a,a);}
    else
    {printf("False\n", n);}
    getch();
}