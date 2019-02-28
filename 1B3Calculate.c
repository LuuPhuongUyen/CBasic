#include <stdio.h>
#include <conio.h>

int main(void)
{
    int a, b, kq;
    char c;
    printf("Nhap so thu nhat:"); scanf("%d", &a);
    printf("Nhap so thu hai:"); scanf("%d", &b);
    printf("Nhap vao phep tinh :"); scanf(" %c", &c);
    switch(c)
    {
        case '+': kq=a+b;
        printf("Ket qua :%d",kq);
        break;// thoát khỏi switch

        case '-': kq=a-b;
        printf("Ket qua :%d",kq);
        break;

        case '*': kq=a*b;
        printf("Ket qua :%d",kq);
        break;

        case '/': kq=a/b;
        printf("Ket qua :%f",1.0*a/b);
        break;
         
        case '%': kq=a%b;
        printf("Ket qua :%d",kq);
        break;
//nếu các trường hợp đều không thỏa mãn thì thực hiện lệnh của trường hợp mặc định
        default: printf("Nhap khong hop le\n");
    }
    getch();
    return 0;
}