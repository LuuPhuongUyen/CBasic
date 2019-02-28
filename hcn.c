#include <stdio.h>
#include <conio.h>

int main(void)
{
float a,b,C,S;
    printf("Nhap vao do dai canh a, b:"); scanf("%f%f", &a, &b);
    if ( a<=0 || b<=0)
       printf("Day khong phai la hinh chu nhat");
    else
{
      C=(a+b)*2;
      S=a*b;
      printf("Chu vi hinh chu nhat la: %f\n",C);
      printf("Dien tich hinh chu nhat la: %f",S);
}
    getch(); 
   

}