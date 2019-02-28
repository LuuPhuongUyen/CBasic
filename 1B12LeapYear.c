#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int m, y;
    printf("Nhap thang nam:");
    scanf("%d%d", &m, &y);

    if ((m == 1) || (m == 3))
        printf("Quy I, 31 ngay");
    else if (m == 2)
    {
        if ((y % 4 == 0) && (y % 100 != 0))
            printf("Quy I, 29 ngay");
        else
            printf("Quy I, 28 ngay");
    }
    else if ((m == 4) || (m == 6))
        printf("Quy II, 30 ngay");
    else if (m == 5)
        printf("Quy II, 31 ngay");
    else if ((m == 7) || (m == 8))
        printf("Quy III, 31 ngay");
    else if (m == 9)
        printf("Quy III, 30 ngay");
    else if ((m == 10) || (m == 12))
        printf("Quy IV, 31 ngay");
    else if (m == 11)
        printf("Quy IV, 30 ngay");
    else
        printf("Nhap sai");
    getch();
}