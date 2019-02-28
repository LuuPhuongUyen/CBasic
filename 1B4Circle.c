#include <stdio.h>
#include <conio.h>
#define pi 3.14 //hằng số

int main(void)
{
    float r;
    printf("Nhap ban kinh r:"); scanf("%f", &r);
    printf("%f\n",2*pi*r);
    printf("%f\n",pi*r*r);
    printf("%f",4/3*pi*r*r*r);
    getch();
}