#include <stdio.h>
#include <conio.h>

int main(void)
{
    int a;
    float b;
    char c;
    printf("Nhap vao so nguyen a:"); scanf("%d", &a);
    printf("Nhap vao so thuc b:"); scanf("%f", &b);
    printf("Nhap vao ki tu :"); scanf(" %c", &c);
    printf("So nguyen : %d\n",a);
    printf("So thuc: %f\n",b);
    printf("Ki tu : \"%c\"", c); // in ra dau "
    getch();
}