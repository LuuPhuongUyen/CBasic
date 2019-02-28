#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int i = 0, n, k;
    char a[30];
    printf("Nhap chuoi: ");
    gets(a);
    n = strlen(a);
    k = n - 1;
    while (n > i)
    {
        if (a[i] != a[k])
        {
            printf("Chuoi khong doi xung");
            getch();
            return 1;
        }
        i++;
        k--;
    }
    printf("Chuoi doi xung");
    getch();
    return 0;
}