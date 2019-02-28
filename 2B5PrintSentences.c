#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Enter number:"); scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("This is the sentence: %d\n", i);
    }
    getch();
}