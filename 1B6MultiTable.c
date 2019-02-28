#include <stdio.h>
#include <conio.h>

int main(void)
{
    int a,i;
    printf("Nhap so:"); scanf("%d", &a);
    for(i=1; i<=10; i++)   //vong lap bat dau, i chay tu 1 den 10, moi lan tang them 1 don vi
    printf("%dx%d=%d\n",a,i,a*i); // trinh bay ro phep nhan
    getch();
}