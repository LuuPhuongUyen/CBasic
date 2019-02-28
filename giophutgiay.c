#include <stdio.h>
#include <conio.h>

int main(void)
{
    int a,b, gio, phut, giay;
    printf("Nhap vao so giay a:"); scanf("%d", &a);
    gio=a/3600;
    b=a%3600;
    phut=b/60;
    giay=b%60;
    printf("%dgio:%dphut:%dgiay\n", gio, phut, giay);
    getch();
}