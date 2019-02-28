#include <stdio.h>
#include <conio.h>
#include <math.h>

int nt(int n) //khai báo hàm kiểm tra n có là số nguyên tố hay không
{
    int i;

    if (n < 2)
        return 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main(void)
{
    int a;
    printf("Nhap a=");
    scanf("%d", &a);
    if (nt(a) == 0) //hàm trả về 2 giá trị: 0 nếu n không phải là số nguyên tố hoặc 1 nếu n là số nguyên tố.
        printf("Khong la so nguyen to", a);
    else if (nt(a) == 1)
        printf("La so nguyen to", a);
    getch();
}
